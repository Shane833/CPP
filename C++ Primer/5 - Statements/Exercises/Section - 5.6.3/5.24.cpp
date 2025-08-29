#include <iostream>
#include <stdexcept>

int main()
{
	int a = 2, b = 0;

	if(0 == b){
		throw std::runtime_error("Trying to divide by zero"); 
	}

	return 0;
}