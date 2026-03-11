#include "Screen.hpp"
#include <vector>

class Window_mgr{
    private:
        // It contains a collection of screens
        // by default it will contains one standard sized blank screen
        std::vector<Screen> screens{Screen(24, 80, ' ')}; // using a list initializer
};
