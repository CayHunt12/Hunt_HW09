#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Record.h"
#include <string>
#include <iostream>

#define MAXSIZE 100

class PhoneBook {
private:
    Record list[MAXSIZE];
    std::string bookName;
    int num_records;

    // Helper function to find the index of a name
    int findName(std::string s);

public:
    // Default constructor
    PhoneBook();

    // Constructor with phone book name
    PhoneBook(std::string s);

    // Get phone book name
    std::string getPhoneBookName();

    // Get number of records
    int getNumberofRecords();

    // Insert a new record
    void insert(std::string name, int number);

    // Display all records
    void displayPhoneBook();

    // Remove a record by name
    void removeName(std::string s);

    // Get phone number by name
    int getPhoneNumber(std::string s);
    };

  #endif // PHONEBOOK_H
