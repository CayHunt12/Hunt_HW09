#include "Record.h"

// Default constructor
Record::Record() {}

// Constructor with parameters
Record::Record(std::string name, int number) : name(name), number(number) {}

// Get the name
std::string Record::getName() {
    return name;
    }

    // Get the phone number
    int Record::getNumber() {
        return number;
        }

        // Set the name
        void Record::setName(std::string s) {
            name = s;
            }

            // Set the phone number
            void Record::setNumber(int n) {
                number = n;
                }

                // Destructor
                Record::~Record() {}

