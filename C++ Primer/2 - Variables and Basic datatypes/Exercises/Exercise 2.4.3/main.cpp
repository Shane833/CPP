#include <iostream>

int main()
{
	const int i = 32;
	
	const int v2 = 0;
	int v1 = v2;
	
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;
	
	/*
	r1 = v2;
	r1 = 3;
	std::cout << r1 << std::endl;
	*/
	
	// p1 = p2;
	
	// p1 = p3;
	
	p2 = p1;
	
	p2 = p3;
}