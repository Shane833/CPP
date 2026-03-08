#include "Person.hpp"

int main(){

    Person a("Shivang", "Punjab");
    Person b(std::cin);

   print(std::cout, a) << std::endl;
   print(std::cout, b) << std::endl;

}
