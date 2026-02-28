#include <print>
#include <vector>

// our function pointer
//using fp = int (*)(int , int);
// another way
//typedef int (*fp)(int, int);
// yet another way using decltype
// typedef decltype(sum) *fp;

int addition(int a, int b){
    return a + b;
}
    
int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a / b;
}

// yet another way
typedef decltype(addition) *fp; // decltype returns the function type we have to explicitely convert it to a pointer to a function

int main(){
    std::vector<fp> func_vec;
    
    func_vec.push_back(addition);
    func_vec.push_back(subtract);
    func_vec.push_back(multiply);
    func_vec.push_back(divide);
    
    std::println("Addition of 4 & 2 : {}",func_vec[0](4,2));
    std::println("Difference of 4 & 2 : {}",func_vec[1](4,2));
    std::println("Multiplication of 4 & 2 : {}",func_vec[2](4,2));
    std::println("Division of 4 & 2 : {}",func_vec[3](4,2));
}

