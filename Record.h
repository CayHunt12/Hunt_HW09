#ifndef RECORD_H
#define RECORD_H
#include <string>

class Record {
private:
    std::string name;
    int number;

public:
    // Default constructor
    Record();

    // Constructor
    Record(std::string name, int number);

    // Getters
    std::string getName();
    int getNumber();

    // Setters
    void setName(std::string s);
    void setNumber(int n);

    // Destructor
    ~Record();
    };

#endif // RECORD_H

