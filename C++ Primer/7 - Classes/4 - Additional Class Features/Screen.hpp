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
        Screen &set(char); // writes at the current cursor
        Screen &set(pos, pos, char); // writes at a given position
        inline char get(pos wd, pos ht) const; // explicitely inline
        Screen &move(pos row, pos col); // can be made inline later
        void countAccessCtr() const;
        // display overloaded on whether the object is const or not
        Screen &display(std::ostream &os){ do_display(os); return *this;}
        Screen &display(std::ostream &os) const { do_display(os) ; return *this;}
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
        mutable size_t access_ctr; // can be modified even in a const object
        void do_display(std::ostream &)const {os << contents;}
};
