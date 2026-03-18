#include <iostream>

class Debug{
    public:
        // A constexpr constructor must follow the rules of being both a constructor
        // i.e. it can have no return statement but must also follow the rules of
        // being a constexpr function, i.e. the only executable statement is a return 
        // statement in its body. So for this reason, its body is usually empty
        constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
        constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
        constexpr bool any() { return hw || io || other; }
        void set_io(bool b) { io = b; }
        void set_hw(bool b) { hw = b; }
        void set_other(bool b) { other = b; }
    private:
            bool hw;
            bool io;
            bool other;
};
