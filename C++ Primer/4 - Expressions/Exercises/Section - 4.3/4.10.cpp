#include <iostream>

int main()
{
	int temp = 0;
	// It will evaluate the left operand first
	// and then check the right operand
	while(std::cin >> temp && temp != 42);

	std::cout << "Out of Loop!" << std::endl;
}