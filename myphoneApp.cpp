#include "Phonebook.h"
#include <iostream>

int main() {
    PhoneBook pb("My PhoneBook");
    int choice;
    std::string name;
    int number;

  do {
          std::cout << "\n1. Insert a name and number.\n";
          std::cout << "2. Get a number for a person.\n";
          std::cout << "3. Display phone book.\n";
          std::cout << "4. Remove a person from the phone book.\n";
          std::cout << "5. Quit.\n";
          std::cout << "Enter your choice: ";
          std::cin >> choice;

          
switch (choice) {
   case 1:
      std::cout << "Enter Name: ";
      std::cin.ignore();
      std::getline(std::cin, name);
      std::cout << "Enter Number:" ;
      std::cin >> number;
      std::cout << "Enter Number:";
      std::cin >> number;
      pb.insert(name, number);
      break;

    case 2:
      std::cout << "Enter Name to look up:";
      std::cin.ignore();
      std::getline(std::cin, name);
      number = pb.getPhoneNumber(name);
      if (number != -1) {
        std::cout << "Number for" << name << "is" << number << std::endl;
        }
      break;

    case 3:
      pb.displayPhoneBook();
      break;

    case 4:
      std::cout << "Enter name to remove:";
      std::getline(std::cin, name);
      pb.removeName(name);
      break;
    case 5:
      std::cout << "Exiting the application." << std::endl;
      break;
    
    default:
      std::cout << "Invalid Choice! Please try again" << std::endl;
      break;
     }
   }while(choice !=5);

   return 0;
}
