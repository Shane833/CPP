#include <iostream>

int main()
{
	// Since it can be tedious to manually type in input data again and again
	// most OS allows for file redirection to the compiled executible file
	// Input File : a.exe <input.txt
	// Output File a.exe >output.txt
	// They can be used in combination : a.exe <input.txt >output.txt
	// Symbols '<' and '>' replace the standard input and output streams in the program
	
	int val = 0;
	
	std::cin >> val;
	
	std::cout << val << std::endl;
	
	return 0;
}