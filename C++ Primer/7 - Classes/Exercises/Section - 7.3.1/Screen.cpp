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
