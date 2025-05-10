#include <iostream>

int main()
{
    int sum = 0, value = 0; // used to store the total sum and the current value

    while(std::cin >> value) 
    // First it reads the value from the standard input
    // Then the input operator ">>" returns its left hand operand 
    // hence the result is std::cin, then it will be checked in the while
    // If the std::cin stream is valid the loop continues
    {
        sum += value;
    }

    std::cout << "Sum is : " << sum << std::endl;
    return 0;
}