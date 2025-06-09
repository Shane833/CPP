#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
	// Defining two strings and declaring one string
	char one[] = "Hello ";
	char two[] = "there!!!";
	char three[30];

	// Using strcpy and strcat
	strcpy(three, one); // Copying one into three first
	strcat(three,two); // Concatenating the second string with this
	
	std::cout << three << std::endl;
}