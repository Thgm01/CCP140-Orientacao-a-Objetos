#include <iostream>
#include <pigpio.h>
#include <chrono>
#include <thread>

int main()
{
  int led_pin = 17;

  if(gpioInitialise() < 0)
  {
    std::cerr << "Falha ao iniciar" << std::endl;
    return 1;
  }

  gpioSetMode(led_pin, PI_OUTPUT);

  while(true)
  {
    gpioWrite(led_pin, 1);
    std::cout << "LED ON" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    gpioWrite(led_pin, 0);
    std::cout << "LED ON" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}
