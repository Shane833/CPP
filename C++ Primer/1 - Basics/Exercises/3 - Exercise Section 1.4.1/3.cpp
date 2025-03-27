#include <iostream>

int main()
{
    int lower = 0, upper = 0;

    std::cout << "Enter a range of numbers (lower upper) : ";
    std::cin >> lower >> upper;
    
    while(lower <= upper){
        std::cout << lower << std::endl;
        ++lower;
    }

    return 0;
}