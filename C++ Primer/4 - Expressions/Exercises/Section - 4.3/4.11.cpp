#include <iostream>

int main()
{
	int a = 4, b = 3, c = 1, d = 2;
 
	bool result = a > b ? (b > c ? (c > d ? true : false) : false) : false;

	std::cout << result << std::endl;
}