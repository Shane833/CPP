#include "Screen.hpp"
#include <vector>

#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

// Now that Window_mgr is declared a friend class in class Screen, it can access its private members
class Window_mgr{
    public:
        // location ID for each screen on the window
        using ScreenIndex = std::vector<Screen>::size_type;
        // reset the screen at the given position to all the blanks
        void clear(ScreenIndex i);
    private:
        // It contains a collection of screens
        // by default it will contains one standard sized blank screen
        std::vector<Screen> screens{Screen(24, 80, ' ')}; // using a list initializer
};

void Window_mgr::clear(ScreenIndex i){
    // s is a reference to the screen we want to clear
    Screen &s = screens[i];
    // reset the contents of that Screen to all blanks
    s.contents = std::string(s.height * s.width, ' ');
}

#endif
