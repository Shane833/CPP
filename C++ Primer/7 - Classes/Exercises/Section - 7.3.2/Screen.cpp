#include "Screen.hpp"

/* NOTE : If you want to define your function to be inline outside the class
   then you must define it in the same header else it will lead to undefined
   reference error as it will consider it as a separate definition across different
   transalation units
// Explicitely specifying the function to be inline
inline Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

// This function was declared inline inside the class
char Screen::get(pos row_no, pos col) const{
    pos row = row_no * width;
    return contents[row + col];
}

void Screen::countAccessCtr() const {

    ++access_ctr; // keeps a count of the calls to this member function
}

Screen &Screen::set(char c){
    contents[cursor] = c; // set the new value at the current cursor location
    return *this; // return this object as an lvalue
}

Screen &Screen::set(pos row_no, pos col, char c){
    contents[row_no * width + col] = c; // set specified location to given value
    return *this; // return this object as an lvalue
}
*/
