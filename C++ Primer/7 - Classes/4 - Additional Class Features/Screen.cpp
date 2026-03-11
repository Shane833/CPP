#include "Scree.hpp"

// Explicitely specifying the function to be inline
inline Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

// This function was declared inline inside the class
char Screen::get(pos r, pos c){
    pos row = r * width;
    return contents[row + c];
}

void Screen::countAccessCtr() const {

    ++access_ctr; // keeps a count of the calls to this member function
}

inline Screen &Screen::set(char c){
    contents[cursor] = c; // set the new value at the current cursor location
    return *this; // return this object as an lvalue
}

inline Screen &Screen::set(pos row, pos col, char c){
    contents[r * width + col] = ch; // set specified location to given value
    return *this; // return this object as an lvalue
}
