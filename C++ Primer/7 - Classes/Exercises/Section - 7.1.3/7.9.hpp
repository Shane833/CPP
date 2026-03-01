#include <iostream>
#include <string>

struct Person{
    // Member functions
    std::string getName() const {return name;}
    std::string getAddress() const {return name;}
    // data members
    std::string name;
    std::string address;
};

// Function to read from and write to Person objects
std::ostream &print(std::ostream &os, const Person &);
std::istream &read(std::istream &is, Person &);
