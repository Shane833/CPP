#include <iostream>
#include <cstring>

int main(int argc,char *argv[])
{
	// C++ have a support for c-style strings which is defined in the cstring header file which is a C++ version of the string.h header file
	/* Some of the important functions present defined in this header file are :
	1. strlen(p) - returns the length of the string p,not counting the null character
	2. strcmp(p1,p2) - compares p1 and p2 for equality, returns 0 if p1 == p2, a positive number if p1 > p2 and a negative number if p1 < p2
	3. strcat(p1,p2) - appends/concatenates p2 to p2. Return p1
	4. strcpy(p1,p2) - copies p2 into p1. Returns p1
	*/

	// IMPORTANT NOTE
	// When using these C style string functions the string passed must be a null terminated array
	char a[] = {'c','#','\0'}; 
	std::cout << strlen(a) << std::endl; // if this array is not terminated with a null character then the pointer will traverse through memory till it founds a null character

	// COMPARING C STYLE STRINGS
	// With library defined strings you can use the comparision operators in the if statments to compare two string
	// However doing so for C style strings will only compare the base address values of both the strings
	// Therefore, we will use the strcmp function for camparing two string
	char p1[50] = "Python";
	char p2[50] = "Lua";

	if(strcmp(p1,p2) > 0)
	{
		std::cout << p1 << " is greater than " << p2 << std::endl;
	}

	// APPENDING AND COPYING C STYLE STRINGS
	// When using functions like strcat or strcpy, the user is responsible for calculating that the strings must have additional memory to store the appended string including the null character
	char large[100];
	strcpy(large,p2); // Copies the content of the string p2 into large
	strcat(large," and ");
	strcat(large,p1);
	std::cout << large << std::endl;
}