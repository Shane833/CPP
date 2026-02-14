#include <iostream>
#include <string>
#include <cstdlib>
using std::string;

// we return a const ref in order to make it read only
const int &greater(const int &a, const int &b){ // We can only pass plain references to the references in the parameters but we can't pass references to local variables
	return a >= b ? a : b;
}

// Here's an example 
// disaster: this function returns a reference to a local object
const string &manip()
{
	string ret;
	// transform ret in some way
	if (!ret.empty())
		return ret;
	// WRONG: returning a reference to a local object!
	else
		return "Empty"; // WRONG: "Empty" is a local temporary string
}

// Returning a char * to a local temporary string
char *str(){
	char *p1 = "Hello"; // I think this will get stored in the text segment of the executable
	char *p2 = "Hello";

	printf("%p & %p\n", p1, p2);

	return p1;
}

int main(){

	char *p1 = "Hi";
	char *p2 = "Hi";

	printf("%p & %p\n", p1, p2);

	char *sptr = str();
	printf("%p & %s\n", sptr, sptr);

	int a = 2, b = 3;
	/*
	int& c = greater(a,b);
	c = 4;
	std::cout << b;
	*/
	std::cout << "Greater of " << a << " & " << b << " : " <<  greater(a,b) << std::endl;

	const string &s = manip();
	std::cout << s << std::endl; 

	return 0;
}