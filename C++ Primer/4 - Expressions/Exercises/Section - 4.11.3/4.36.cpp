#include <iostream>

int main()
{
	int i = 42;
	double d = 2.45;

	i *= static_cast<int>(d);

	std::cout << i << std::endl;

	return 0;
}