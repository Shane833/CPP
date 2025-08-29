#include <iostream>
#include <string>

int print_message(std::string message){ // parameter
	static int count = 0; // local static
	std::string s = "Your message is : "; // local variable
	
	std::cout << (s + message) << std::endl;

	return ++count;
}

int main()
{
	print_message("Trying to come up with a function which used parameters, local static and local variables.");

	return 0;
}