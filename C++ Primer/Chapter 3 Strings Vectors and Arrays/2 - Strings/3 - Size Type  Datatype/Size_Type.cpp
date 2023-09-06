#include <iostream>
#include <string>
using namespace std;


int main(){

    // Now you may think that when we use the size() methods it return a integer value or something of that sort but no
    // it returns a value of size_type which is defined in the string class ,some types are defined within and a exclusive to some classes
    // its not clear what datatype is of size_type but its most definitely an unsigned value
    // so if you try to compare negative ints the negative value will wrap around the range and will give some big number
    // so its advised not to use simple ints while dealing with size_type variables

    string name("Shivang");

    string::size_type size = name.size();

    cout << size << endl;

    // instead of defining the size_type variables you can let the compiler handle the type of the variable by using the auto keyword

    auto length = name.size();// it automatically gives it a type of size_type

    cout << length << endl;

    // however if you want to manually deal with it you create an alias using typedef in the global section 
    // like typedef strint::size_type sizetype; or anything that you want to call it
}