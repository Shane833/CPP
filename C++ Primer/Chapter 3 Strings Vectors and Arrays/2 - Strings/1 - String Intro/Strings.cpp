#include <iostream>
#include <string>
using namespace std;

int main(){

    // string is a simples an array of characters
    // In C++ the string type is defined in the std namespace and if you want to use any functions related to strings you must include the string header file

    // Various ways of initializing a string

    string a;// here we use the type string and declare a string named 'a' and by default it creates an empty string automatically
    
    string b = "Yo!!";// here we initialized like we do any other datatype, this is called copy initialization as we are copying the value of the string on the right side of the = into our string variable

    string c("Hehe!");// Since we are creating an object from the string class we can initialize the constructor by defining the value of our string as an argument
    // and this is called direct initialization as we are not copying value of any string

    string d(10 , 's');// now you also have multiple values of the same character by giving the size first and then the character 's' later 
    //This will be equal to ssssssssss

    // You can also copy the values of string into other string simply by using the assignment operator
    string e = b;// string b is copied into string e

    // You can also do the same by using direct initialization 
    string f(c);// same as above 
    



    
}