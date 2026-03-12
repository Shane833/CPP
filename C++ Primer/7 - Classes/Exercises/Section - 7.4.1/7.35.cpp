#include <iostream>
#include <string>

typedef std::string Type;
Type initVal();

class Exercise{
    public:
        // Type xyz(); // will be in error bcz we are first using the outside type then redefining it
        typedef double Type;
        Type setVal(Type);
        Type initVal();
    private:
        int val;
};

Exercise::Type Exercise::setVal(Type param){
    val = param + initVal();
    return val;
}

int main()
{
    std::cout << "Works!" << std::endl;
}
