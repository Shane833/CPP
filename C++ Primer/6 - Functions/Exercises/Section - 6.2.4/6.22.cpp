#include <print>
#include <iostream>

void swapPointers(int* *p, int* *q){ // read it as : pointer to an integer pointer
	int *temp = *p; // storing the values pointed/stored by p
	*p = *q;
	*q = temp;
}

int main(){
	int *a = new int(5);
	int *b = new int(10);

	// But why didn't this work
	// UPDATE : Ok So I found that int* don't implicitely get formatted so you have to explicitely cast to a void* using static_cast<void*>
	//std::println("Before Swap: addrpointed(a) : {}, addrpointed(b) : {}, underlyingvalue(a) : {}, underlyingvalue(b) : {}", a, b, *a, *b);
	
	std::cout << "Before Swap: addrpointed(a) : " << a << std::endl; 
	std::cout << "addrpointed(b) : " << b << std::endl;
	std::cout << "underlyingvalue(a) : " << *a << std::endl;
	std::cout << "underlyingvalue(b) : " << *b << std::endl;

	swapPointers(&a, &b);
	
	std::cout << "After Swap: addrpointed(a) : " << a << std::endl; 
	std::cout << "addrpointed(b) : " << b << std::endl;
	std::cout << "underlyingvalue(a) : " << *a << std::endl;
	std::cout << "underlyingvalue(b) : " << *b << std::endl;

	delete a;
	delete b;
}