#include <iostream>
using namespace std;

int main(){

    // const pointers can only point to a single object and can only use to perfom actions on them

    int a = 12;
    int *const p = &a;// to define a const pointer we use the const keyword before the '*' sign and can point to non-const objects
    cout << *p << endl;// This pointer can be used to change the value at the address it is pointing to 

    const int b = 45;
    const int *const p1 = &b;// This type of const pointer can only point to const type object and like any other const object the value at its address cannot be changed

    int const *p2 = &b; // This is a low level const which can point to other objects too, because its poiting to const ints it itself is not const
    cout << *p2 << endl;

    p2 = &a;
    cout << *p2;
}