#include <iostream>
#include <print>

void reset(int &num){
    num = 0;
}

int main(){
    int n = 42;
    std::println("BEFORE: n = {}", n);

    reset(n);

    std::println("AFTER: n = {}", n);
}