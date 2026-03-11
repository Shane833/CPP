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
        Screen &move(pos row, pos col); // can be made inline later
        void countAccessCtr() const;
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
        mutable size_t access_ctr; // can be modified even in a const object
};
