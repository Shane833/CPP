#include <iostream>

int main()
{
	int p = -30 * 3 + 21 / 5;
	int q = -30 + 3 * 21 / 5;
	int r = 30 / 3 * 21 % 5;
	int s = -30 / 3 * 21 % 4;

	std::cout << p << std::endl; 
	std::cout << q << std::endl; 
	std::cout << r << std::endl; 
	std::cout << s << std::endl; 
}