#include <iostream>

// Recursive Factorial Functoin
int fact(int number){
	if(number == 1) return 1;
	return number * fact(number - 1);
}

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
