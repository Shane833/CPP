#include <iostream>
#include "chapter6.h"

int main(){
	int number = 0;

	std::cout << "Enter a number : ";
	std::cin >> number;

	if(number <= 0){
		std::cout << "Invalid Input : Provide a number greater than 0!" << std::endl;
		return 0;
	}

	std::cout << "Factorial of your number : " << fact(number) << std::endl;
	return 0;
}