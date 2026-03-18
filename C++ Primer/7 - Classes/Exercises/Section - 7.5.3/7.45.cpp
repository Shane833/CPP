#include <iostream>
#include <vector>

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
    std::vector<C> vec(10); // This is not possible as NoDefault has no default constructor     
}
