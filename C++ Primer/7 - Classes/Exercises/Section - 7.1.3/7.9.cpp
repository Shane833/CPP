#include "7.9.hpp"

std::ostream &print(std::ostream &os, const Person &p){
    os << "Name : " << p.name << " " << "Address : " << p.address;
    return os;
}

std::istream &read(std::istream &is, Person &p){
    std::cout << "Enter you name and address : ";
    is >> p.name >> p.address;
    return is;
}

int main(){
    Person a, b, c;

    if(!read(std::cin, a)) return 1;
    if(!read(std::cin, b)) return 1;
    if(!read(std::cin, c)) return 1;
    
    print(std::cout, a) << std::endl;
    print(std::cout, b) << std::endl;
    print(std::cout, c) << std::endl;
}
