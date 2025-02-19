#include <iostream>
using namespace std;

int main(){

/** Type Alias is just a way to define the same datatype with different name
 * like we use in python as import numpy as np
 * so the np is just simply another name for numpy which can be used in place of numpy to call its methods
*/

// There a two ways to do make Type Aliases
// First is using the typedef keyword followed by the datatype followed by what you would like to replace it with

typedef long long vlg; // Now vlg is another name for defining long long datatype
// so instead of writing long long everytime you can just use vlg
vlg long_number = 123456789456123;

// Another way of defining a Type Alias is with 'using' keyword
// write the name of your alias for the datatype after using keyword and '=' then write the datatype you want the alias for

using ld = long double;
ld pi = 3.145926312;

}