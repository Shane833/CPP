#include <iostream>
#include <print>

// Simple program to swap values of two variable using call by pointer values

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10, b = 20;

    // To run this be sure to set the flag std=c++23 while compiling
    std::println("BEFORE: a = {} and b = {}", a, b);
    swap(&a, &b);
    std::println("AFTER: a = {} and b = {}", a, b);
}