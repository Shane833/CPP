#include <iostream>
using namespace std;

int main(){

    // 'auto' keyword in C++ automatically specifies the datatype of any variable that you define
    // it is necessry that you initialize/define it else it will give an error

    auto a = 1;// Here as a is initialized to 1 it automatically the datatype of a is set to an int
    auto b = 3.12;// Similarly here the datatype of b is automatically set to double

    auto c = 23,d = 45;// similarly you can declare variables of same datatype

    auto e = true,f = false;
    /**
     * However you cannot do this
     * auto a = 12, b = 3.14 this will give a type mismatch error as one is of type int and another is of type float
     */
    
    // You can also create pointer and references through the auto keyword

    int h = 12;
    auto &r = h,*p = &h;//now this is valid because both the reference and the pointer are of type int
    
    

}