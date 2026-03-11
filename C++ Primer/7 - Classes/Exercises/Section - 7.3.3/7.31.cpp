#include <iostream>

class Y;

class X{
    Y *y_ptr; // we can have a pointer to Y since Y is already declared
};

class Y{
    X x_obj; // then we can have an object of X, bcz X is already defined
};

int main(){
    std::cout << "Works!" << std::endl;
}
