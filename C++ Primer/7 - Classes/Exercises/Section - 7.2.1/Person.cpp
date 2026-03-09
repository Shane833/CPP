#include "Person.hpp"

Person::Person(std::istream &is){
    read(is, *this);
}

std::ostream &print(std::ostream &os, const Person &p){
    os << "Name : " << p.name << " " << "Address : " << p.address;
    return os;
}

std::istream &read(std::istream &is, Person &p){
    std::cout << "Enter you name and address : ";
    is >> p.name >> p.address;
    return is;
}

