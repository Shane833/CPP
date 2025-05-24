#include <iostream>

int main()
{
	// decltype deduces the type of its operand including top level const and references
	
	const int ci = 0, &cj = ci;
	
	decltype(ci) x = 0; // ci is const int
	decltype(cj) y = x; // cj is const int &
	decltype(cj) z; // error as like any reference it must be initialized
}