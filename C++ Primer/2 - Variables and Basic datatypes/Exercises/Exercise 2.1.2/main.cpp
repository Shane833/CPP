#include <iostream>

int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl; // Result : 32
	std::cout << u - u2 << std::endl; // This will warp back since on subtracting
									  // The result will be -32 and its not a valid unsigned
	
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; // Result : 32
	std::cout << i - i2 << std::endl; // Result : -32
	
	std::cout << i - u << std::endl; // i gets converted to an unsigned type but no affect 
									// and Result : 0
	std::cout << u - i << std::endl; // Again I think it won't affect the result
	
	
}