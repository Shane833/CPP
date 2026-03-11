#include <iostream>
#include <string>

class Screen{
    public:
        typedef std::string::size_type pos; // we can declare types within the class
        Screen() = default; // default initializer explicitely defined 
        Screen(pos wd, pos ht): width(wd), height(ht), contents(wd * ht, ' '){}
        Screen(pos wd, pos ht, char c): width(wd), height(ht), contents(wd * ht, c){}
        // gets the character at the cursor
        char get() const { return contents[cursor];} // implicitely inline
                inline char get(pos wd, pos ht) const; // explicitely inline
        void countAccessCtr() const;
        // display overloaded on whether the object is const or not
        Screen &display(std::ostream &os){ do_display(os); return *this;}
        const Screen &display(std::ostream &os) const { do_display(os) ; return *this;}
        Screen &set(char); // writes at the current cursor
        Screen &set(pos, pos, char); // writes at a given position
        Screen &move(pos row, pos col); // can be made inline later, func moves the cursor to a specified location
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
        mutable size_t access_ctr; // can be modified even in a const object
        void do_display(std::ostream &os)const {os << contents;}
};

// NOTE : Functions to be declared inline or static must be declared in the same
// header as their declaration as to save from multiple definition errors

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

inline Screen &Screen::set(char c){
    contents[cursor] = c; // set the new value at the current cursor location
    return *this; // return this object as an lvalue
}

inline Screen &Screen::set(pos row_no, pos col, char c){
    contents[row_no * width + col] = c; // set specified location to given value
    return *this; // return this object as an lvalue
}
