// The preprocessor directives are used at compile time to provide the necessary files to execute our program
// now whenever we are creating our header its important to create header guards to make sure that the same file is not included twice
// bcz if it is included twice it will create the duplicate instances of the same files and there will be overwritting of data

// whenever a header file is defined it is either in one of the two state defined or not defined in our program
// so we first define our preprocessor variable using the #define keyword 
// Now there are two test to check if the header file is define in the program or not
//#ifdef and #ifndef and all the code between them and upto #endif is checked for definition
// when you include your header file for the first time the #ifndef test will be true bcz if its being defined only once and all the data until #endif is included into your program
// now if you try to add your header file the second time in the same program then #ifndef will be false and it will not get included

// Its necessary to make your header guard and other preprocessor directives unique to ensure no clash between files
// its suggested and a common practice to name your header guard the same as your class/struct

#ifndef INFO_H // so if not defined
#define INFO_H // then you must define this processor variable else don't define it
// These preprocessor directives don't follow the scope rules of C++ you can define them at any stage of your code and they would still be globally available
#include <iostream>
using namespace std;

struct info{
    int a = 20;
    string s = "Hiiiii";
};

#endif
