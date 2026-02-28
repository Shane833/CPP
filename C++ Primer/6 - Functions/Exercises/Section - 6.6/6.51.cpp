#include <print>

void f(){
    std::println("Called f()");
}

void f(int){
    std::println("Called f(int)");
}

void f(int, int){
    std::println("Called f(int, int)");
}

void f(double, double){
    std::println("Called f(double, double)");
}

int main(){
    // f(2.56, 42); ambiguous call bcz first parameter finds 
    // f(double, double) to be the best match
    // while the second parameter finds f(int,int) to be a
    // better match
    
    f(42);
    f(42, 0);
    f(2.56, 3.14);
}
