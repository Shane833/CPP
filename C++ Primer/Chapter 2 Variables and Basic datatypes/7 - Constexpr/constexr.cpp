#include <iostream>
using namespace std;

int main(){

    // Now sometimes when we are defining a constant it is not always determined if it being defined using a constant object
    // However if we use the keyword constexpr the compiler would have a way to determine if the constant is actually being defined using a constant object
    int a;// a is not a constant object as its value is undefined
    const int b = a;// This way the compiler has no way to determine if the value is actually being defined using a constant and does not give any error
    constexpr int c = a;// however when we define using the keyword constexpr the compiler do have a way to tell if the value is actually being defined using a constant object
    // in this case the variable a is not constant and therefore the compiler gives an error

    // Whenever you want to use constant expressions use the keyword constexpr to define them;

    // objects defined inside a function dont have a constant memory address
    // However objects defined outside a function have a constant memory address can be used with constexpr
}