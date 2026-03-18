#include <iostream>
#include <string>

class Person{
    // Friend declaration for non-member function 
    friend std::ostream &print(std::ostream &os, const Person &);
    friend std::istream &read(std::istream &is, Person &);
public:
    // Adding constructors
    Person() = default;
    Person(const std::string &name, const std::string &addr):name(name), address(addr){}
    explicit Person(std::istream &is); // to make sure no implicit conversion can take place
                                       // also it disables copy initialization
    // Member functions
    std::string getName() const {return name;}
    std::string getAddress() const {return name;}
private:
    // data members
    std::string name;
    std::string address;
};

// Function to read from and write to Person objects
std::ostream &print(std::ostream &os, const Person &);
std::istream &read(std::istream &is, Person &);
