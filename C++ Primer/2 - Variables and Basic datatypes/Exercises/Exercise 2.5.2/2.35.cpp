#include <iostream>
#include <typeinfo>

int main()
{
	const int i = 42;
	
	auto j = i; // int since top level const is dropped
	const auto &k = i; // k is const int &, which can bind to both const and non-const types
	auto *p = &i; // p is int*
	const auto j2 = i, &k2 = i; // j2 is const int and k2 is const int &
	
	// Lets print the types of the variables
	
	
	j = 32; // since j is int
	std::cout << "Value of j: " << j << std::endl;
	
	// k = 20; // since k is const int &, it can only be used to read the value however the value of the
			// underlying object can change regardless
	std::cout << "Value of k/i: " << k << std::endl;
	
	// *p = 50; // since i is const int, it is by default read only and cannot be changed
	std::cout << "Value of *p/i: " << *p << std::endl;
	
	// j2 = 50; // since j2 is const int its value cannot change
	std::cout << "Value of j2/i: "<< j2 << std::endl;
	
	// and finally k2 is a read only reference, i.e. const int &
	// k2 = 50;
	
	std::cout << "Value of k2/i: " << k2 << std::endl;

	
	
}