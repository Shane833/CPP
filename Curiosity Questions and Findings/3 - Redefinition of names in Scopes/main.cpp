#include <iostream>

// Apparantly its possible to redefine an object in an inner scope
// from the object used in the outer scope even if that object has been
// used in the inner scope

int sum = 10;

int main(){
    std::cout<< "Outer sum : " << sum << std::endl;
    sum = 20;
    std::cout<< "Outer sum : " << sum << std::endl;

    int sum = 5; // Redefinition of the same name variable
    std::cout << "Inner sum : " << sum << std::endl;



}
