  #include <iostream>
  #include <fstream>
  #include <string>
  #include <unistd.h>

  using namespace std;

  #define BUTTON_PATH "/sys/class/gpio/gpio46/value"
  #define LED_PATH "/sys/class/gpio/gpio60/value"

  int main(int argc, char* argv[]) {
      fstream button_fs, led_fs;
      string button_value;

      while (true) {
          // Read the button value
          button_fs.open(BUTTON_PATH, fstream::in);
          button_fs >> button_value;
          button_fs.close();

          led_fs.open(LED_PATH, fstream::out);

          if (button_value == "1") {
            // Turn on the LED
            led_fs << "1";
            } 
            else {
             // Turn off the LED
             led_fs << "0";
             }

             led_fs.close();

             sleep (0.01);

             }

        return 0;

       }      

