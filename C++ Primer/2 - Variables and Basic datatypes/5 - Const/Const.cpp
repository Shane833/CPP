#include <iostream>
using namespace std;

// Now every const variable is local to its file however if you want to use the same const object in multiple files you will use the extern keyword
extern const int b = 1024;
int main(){

// unchangeable variables or simply constants can be defined using the keyword const as the prefix
// and its necessary that it is initialized to some value

const int a = 500; // this value cannot be changed

cout << b << endl;

// Const references
//only const type reference can be used to refer to a const object simple references can't be used for this purpose

const int &r = a;

cout << r << endl;





}