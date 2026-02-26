#include <cassert>
#include <print>
#include <iostream>

void print(const int a[], size_t sz){
    #ifndef NDEUBG
        std::cerr << __func__ << std::endl;
    #endif
}

int sum(int a, int b){
    return a + b;
}

int main(){
    int* p = {0};
    print(p, 3);

    assert(3 == sum(1,2) && "ERROR : Sum is wrong"); // This will fail if false
                           // The checks will only happen
                           // when NDEBUG is not defined
    return 0;
}
