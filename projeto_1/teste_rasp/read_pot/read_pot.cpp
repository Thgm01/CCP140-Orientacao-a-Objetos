#include <iostream>
#include <pigpio.h>

#define MCP3208_SPI_CHANNEL 0 // Usando CE0
#define MCP3208_SPI_SPEED   1000000 // 1 MHz

int read_adc(int channel) {
    // Verificar se o canal é válido (0 a 7 para o MCP3208)
    if (channel < 0 || channel > 7) {
        std::cerr << "Canal ADC inválido: " << channel << std::endl;
        return -1;
    }

    // Buffer para envio e recebimento de dados
    uint8_t tx[3], rx[3];

    // Configuração do MCP3208 para o canal (protocol SPI)
    // Configurando os primeiros bits de tx:
    // - 1º byte: Início da comunicação (1)
    // - 2º byte: (11000000) -> bits para configuração do canal
    tx[0] = 1;  // Start bit
    tx[1] = (8 + channel) << 4;  // Configurar para o canal (shift para alinhar)
    tx[2] = 0; // Dummy byte para receber resposta

    // Transferir dados via SPI
    spiXfer(MCP3208_SPI_CHANNEL, (char*)tx, (char*)rx, 3);

    // O valor do ADC está nos últimos 12 bits dos bytes rx[1] e rx[2]
    int value = ((rx[1] & 0x0F) << 8) | rx[2];

    return value;
}

int main() {
    // Inicializar pigpio
    if (gpioInitialise() < 0) {
        std::cerr << "Falha ao iniciar pigpio!" << std::endl;
        return 1;
    }

    // Configurar SPI
    int spi_handle = spiOpen(MCP3208_SPI_CHANNEL, MCP3208_SPI_SPEED, 0);
    if (spi_handle < 0) {
        std::cerr << "Falha ao abrir a interface SPI!" << std::endl;
        return 1;
    }

    while (true) {
        // Ler o valor do LDR no canal 0
        int ldr_value = read_adc(7);

        // Exibir o valor do LDR (0 a 4095 para 12 bits)
        std::cout << "LDR Value: " << ldr_value << std::endl;

        // Aguardar 500ms antes de fazer a próxima leitura
        gpioDelay(500000);
    }

    // Fechar a interface SPI e finalizar pigpio
    spiClose(spi_handle);
    gpioTerminate();

    return 0;
}

