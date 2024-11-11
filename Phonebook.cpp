#include "Phonebook.h"

// Default constructor
PhoneBook::PhoneBook() : num_records(0) {}

// Constructor with phone book name
PhoneBook::PhoneBook(std::string s) : bookName(s), num_records(0) {}

// Get the phone book name
std::string PhoneBook::getPhoneBookName() {
  return bookName;
}

// Get the number of records in the phone book
int PhoneBook::getNumberofRecords() {
    return num_records;
}

void PhoneBook::insert(std::string name, int number) {
    if (num_records < MAXSIZE) {
            list[num_records] = Record(name, number);
            num_records++;
     } else {
             std::cout << "PhoneBook is full. Cannot add more records.\n";
    }
}

// Display all records
void PhoneBook::displayPhoneBook() {
    for (int i = 0; i < num_records; i++) {
            std::cout << "Name: " << list[i].getName() << ", Number: " <<
            list[i].getNumber() << "\n";
    }
}

void PhoneBook::removeName(std::string s) {
    int index = findName(s);
        if (index != 99) {
          for (int i = index; i < num_records - 1; i++) {
              list[i] = list[i + 1];
              }
          num_records--;
          std::cout << s << " has been removed from the phonebook.\n";
        } else {
          std::cout << "Name not found in the phonebook.\n";
        }
}

int PhoneBook::getPhoneNumber(std::string s) {
    int index = findName(s);
    if (index != 99){
       return list[index].getNumber();
    } else {
        std::cout << "Name not found in the phone book.\n";
        return -1;
      }
   }   

    // Helper function to find the index of a name
    int PhoneBook::findName(std::string s) {
        for (int i = 0; i < num_records; i++) {
          if (list[i].getName() == s) {
            return i;
           }
         }
         return 99;
      }



      
         
