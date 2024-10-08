#include <iostream>
#include <pigpio.h>
#include <unistd.h>  // Para usleep

// Definições dos pinos SPI
#define SPI_CHANNEL 0 // CE0 no Raspberry Pi
#define SPI_SPEED 1350000  // Velocidade da SPI

// Função para ler um canal do MCP3208
int read_adc(int channel) {
    if (channel < 0 || channel > 7) {
        std::cerr << "Canal inválido. Deve estar entre 0 e 7." << std::endl;
        return -1;
    }

    // Enviando 3 bytes: [Start Bit, Channel Selection, Padding]
    char tx_data[3];  // Buffer de transmissão
    char rx_data[3];  // Buffer de recepção

    tx_data[0] = 1;  // Start bit
    tx_data[1] = (8 + channel) << 4;  // Seleciona o canal (8 = leitura de um canal single-ended)
    tx_data[2] = 0;  // Padding

    // Realiza a transação SPI
    int handle = spiOpen(SPI_CHANNEL, SPI_SPEED, 0);
    if (handle < 0) {
        std::cerr << "Erro ao abrir o canal SPI" << std::endl;
        return -1;
    }

    spiXfer(handle, tx_data, rx_data, 3);  // Envia tx_data e recebe rx_data (3 bytes)
    spiClose(handle);  // Fecha a conexão SPI

    // Converte os dados recebidos em um valor de 12 bits
    int result = ((rx_data[1] & 3) << 8) + rx_data[2];
    return result;
}

int main() {
    // Inicializa o pigpio
    if (gpioInitialise() < 0) {
        std::cerr << "Erro ao inicializar o pigpio" << std::endl;
        return 1;
    }

    // Loop de leitura do potenciômetro
    while (true) {
        int adc_value = read_adc(8);  // Lê o canal 0 do MCP3208
        if (adc_value >= 0) {
            float voltage = (adc_value * 3.3) / 4096.0;  // Converte para tensão (assumindo Vref = 3.3V)
            std::cout << "Valor ADC: " << adc_value << " (Tensão: " << voltage << " V)" << std::endl;
        }

        usleep(500000);  // Aguarda 0.5 segundos
    }

    // Finaliza o pigpio
    gpioTerminate();
    return 0;
}
