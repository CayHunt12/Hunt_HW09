#include "myGpio.h"
#include <iostream>
#include <unistd.h>

int main(int argc, char* argv[]) {
    // Description of the application
        // myGpioApp.cpp
            // This program demonstrates the use of the MYGPIO class to control
            // GPIO pins on a BeagleBone.
                // The program instantiates two GPIO objects for p9.12 (output)
                // and p8.16 (input).
                    // No command-line arguments are required.
                        // Example usage: ./myGpioApp
    MYGPIO gpioOut(60);
    gpioOut.setDirection(GPIO_DIRECTION_OUT);

    MYGPIO gpioIn(46);
    gpioIn.setDirection(GPIO_DIRECTION_IN);

    gpioOut.setValue(GPIO_VALUE_HIGH);
        std::cout << "p9.12 set to HIGH: " << gpioOut.getValue() << std::endl;
        sleep(3);
        gpioOut.setValue(GPIO_VALUE_LOW);
        std::cout << "p9.12 set to LOW: " << gpioOut.getValue() << std::endl;
   
    std::cout << "p8.16 value: " << gpioIn.getValue() << std::endl;

    return 0;
  }


