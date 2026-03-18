#include <iostream>

class NoDefault{
    public:
        NoDefault(int) {}// explicit initializer
};

class C{
    public:
        C(): obj(2){} // default initializer, uses constructor initializer list to call for the defined constructor of the NoDefault class
        
        NoDefault obj;
};

int main(){
    C c;
}
