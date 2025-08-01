#include <iostream>

int main()
{
	int x[10], *p = x;

	std::cout << sizeof(x)/sizeof(*x) << std::endl;
	std::cout << sizeof(p)/sizeof(*x) << std::endl;
}