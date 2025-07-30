#include <iostream>

int main()
{
	const char * cp = "Hello";

	if(cp && *cp){
		std::cout << "Expression Evaluates to True!" << std::endl;
	}
}