#include <iostream>
#include <string>
#include <cstring>
#include <vector>

int main(int argc, char *argv[])
{
	// MIXING LIBRARY STRINGS AND C-STYLE STRINGS
	/*
	There are many ways to initialize a library string
	-> You can do with a null terminated character array or simply a string literal
	-> You can use the string compound assignment to a string literal (Ex : string s += "Hello")
	However, there is no direct way to use a library string as C-style string, i.e. you cannot
    directly initialized a character pointer from a library string.
	-> char *str = s; This is illegal
	However, we will use a method of string object : c_str(), which returns a c-style string i.e. the base pointer
    to the null terminated array of characters that holds that same data as the library string
	*/

	std::string name("Shivang"); // Library String
	const char *c_name = name.c_str(); // Initializing a c-style (returns a const char *) string from a library string 
	// Now the type is const char *, so we can't make any changes to the array itself
	// Printing our c-style string
	for(int i = 0;i < name.size();i++)
	{
		std::cout << c_name[i];
	}
	std::cout << std::endl;
	// Now the value returned by c_str() won't get updated with the changes in the library string and hence won't remain valid	
	// So you must call the c_str() for very change made in the library string


	// USING AN ARRAY TO INITIALIZE A VECTOR

	/*
	-> Now it should be noted that we cannot initialize a built-in array from another array nor can we initialize an array from a vector
	-> However we can initialize a vector from a built in array, we can do so by specifying the address of the first element and the address of one past the last element (off the end)
	*/
	int array[] = {1,2,3,4,5,6};
	std::vector<int> ivec(std::begin(array),std::end(array));
	// std::begin and std::end function automatically retrieves the address of the base and one of the end from the array
	for(int i : ivec) std::cout << i << " ";
	std::cout << std::endl;

	// So to generalize : You can initialize a vector from an array in the following way
	// std::vector<type> name(starting_address,one_of_the_end address)
	
	// Lets say I only want to initialize the vector with only a part of the array
	std::vector<int> ivec2(array + 1,array + 4); // Initializes vector from only 3 elements (i.e. from index 2 (array + 1) to index 5 (array + 4))
	for(int i : ivec2) std::cout << i << " ";
	std::cout << std::endl;

	// NOTE : ADVICE: USE LIBRARY TYPES INSTEAD OF ARRAYS
	/*
	Pointers and arrays are surprisingly error-prone. Part of the problem is conceptual:
	Pointers are used for low-level manipulations and it is easy to make bookkeeping
	mistakes. Other problems arise because of the syntax, particularly the declaration
	syntax used with pointers.
	Modern C++ programs should use vectors and iterators instead of built-in arrays
	and pointers, and use strings rather than C-style array-based character strings
	*/
}