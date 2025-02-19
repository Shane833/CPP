#include <iostream>
#include <cstring>
#include <string>

int main(int argc,char *argv[])
{
	// Comparing two library strings
	std::string first = "first";
	std::string second = "second";
	
	if(first > second)
	{
		std::cout << "First is greater" << std::endl;
	}
	else
	{
		std::cout << "Second is greater" << std::endl;
	}
	
	// Comparing C-style Strings
	
	char one[] = "one";
	char two[] = "two";
	
	if(strcmp(one,two) > 0)
	{
		std::cout << "one is greater" << std::endl;
	}
	else
	{
		std::cout << "two is greater" << std::endl;
	}

}