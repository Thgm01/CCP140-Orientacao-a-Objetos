#include <iostream>
#include <pigpio.h>
#include <unistd.h> // Para a função sleep

int main() {
    // Inicializa a biblioteca Pigpio
    if (gpioInitialise() < 0) {
        std::cerr << "Falha ao inicializar a pigpio." << std::endl;
        return 1;
    }

    // Define o pino GPIO para o PWM (GPIO 18 por exemplo)
    int gpioPin = 18;

    // Configura o PWM com uma frequência padrão (800 Hz, pode ser alterada)
    // pigpio usa uma frequência de até 1 MHz com PWM hardware
    gpioSetPWMfrequency(gpioPin, 800); // Define a frequência PWM em 800 Hz

    // Vamos variar o ciclo de trabalho (duty cycle) de 0 a 255
    for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
        gpioPWM(gpioPin, dutyCycle); // Define o duty cycle
        usleep(10000); // Aguarda 10ms para ver o efeito de transição no LED
    }

    // Ao final, desliga o PWM (duty cycle = 0)
    gpioPWM(gpioPin, 0);

    // Finaliza a biblioteca Pigpio
    gpioTerminate();

    return 0;
}

