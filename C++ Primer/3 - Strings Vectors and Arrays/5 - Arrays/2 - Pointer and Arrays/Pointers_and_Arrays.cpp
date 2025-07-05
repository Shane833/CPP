#include <iostream>
#include <string>
#include <iterator> // contains the begin and end functions

// Trying if begin and end works on arrays passed into functions
void displayInt(int arr[]){
	int * pbeg = std::begin(arr);
	int * pend = std::end(arr);
}

int main(int argc,char *argv[])
{
	// In C++ arrays and pointers can be used interchangeably
	// When we work with arrays in C++, the compiler already converts it into a pointer
	// We use pointers with the help of the address-of operator and since mostly all of the things are objects we can use the pointer to point to them
	// For example: We can use the address of individual elements of the arrays to point to them and manipulate them

	std::string num[] = {"one","two","three"};	//array of strings
	std::string *p = &num[0]; // p points to the first element in num
	
	// Despite explicitely providing the address of the first element of the array you can simpley use the name of the array too
	// Arrays have this special property where when we use an array the compiler automatically substitutes a pointer for the first element
	
	std::string *p2 = num; // equivalent to &num[0]

	// Operation on arrays are really operations on pointer
	// For example : when you try to declare a variable using auto you get the pointer type of that variable not the variable itself
	int ia[] = {1,2,3,4};
	auto var(ia); // declaration of var
	// now you cannot assign integer value to the variable var as it is not of type int but int*
	// var = 34; This would generate an error
	// So basically the compiler treats the initialization as 
	// auto var(&ia[0]); So this is now clear that the type will be a pointer

	// POINTERS ARE ITERATORS

	// Pointers to arrays support the same operations as iterators of vector or string
	// Just like iterators we use the increment operator to move to the next element of the array
	// Like iterators we can also traverse through the element of arrays for that we would require the address of the first element and the address one past the last elements	
	// using the previous integer array 'ia'
	int *s = ia,*e = &ia[4]; // using this we can write a loop to traverse through the elements
	for(int *i = s;i != e;i++)
	{
		std::cout << *i << std::endl;
	}

	// BEGIN AND END FUNCTIONS
	
	// Computing the off-the-end pointer can be error-prone sometimes
	// To make it easier for us, they include the 'begin' and 'end' function
	// Since arrays are not objects hence we cannot use the member functions
	// However these functions take the arguments as the array itself and return the desired pointer to that array
	int *begin = std::begin(ia); // starting pointer
	int *end = std::end(ia); // off-the-end pointer
	while(begin != end && *begin >= 0)
	{
		std::cout << *begin << std::endl;
		begin++;
	}
	// Trying my theory
	// displayInt(ia); won't work

	// POINTER ARITHEMETIC
	
	// Like iterators pointers can also use the operations such as : dereference,increment,comparision,addition of an integral value, subtraction of two pointers
	// When we add or subtract an integral value to or from a pointer, the result is a new pointer which points to element the given number of elements ahead or behind the original pointer
	constexpr size_t sz = 5;
	int array[sz] = {1,2,3,4,5};
	int *ip = array;
	int *ip2 = ip + 4;
	std::cout << *ip << " " << *ip2 << std::endl;

	// INTERACTION BETWEEN DEREFERENCE AND POINTER ARITHEMATIC

	int ia1[] = {1,2,3,4,5};
	int val = *(ia1 + 4); // Basically the pointer will look 4 values past the base value so basically saying ia1[4]
	int last = *ia1 + 4; // This is basically the same and equivalent of ia1[0] + 4
	std::cout << val << " " << last << std::endl;

	// SUBSCRIPTS AND POINTERS
	
	// Whenever we subscript the array to access its element the compiler basically treats it the same as deferencing a pointer n values ahead of the base address
	int i = ia[2]; // We use the subscript [] to access the 3rd element of the array
	int *ptr = ia; // Here we are assigning the the pointer ptr the base addrees
	i = *(ptr + 2); // This is equivalent of ia[2]
	std::cout << i << std::endl;

	// We can use the subscript operator on any pointer as long the pointer points to a valid element in the array or one past the last element
	int *pt = &ia1[2];
	i = pt[2];
	int k = pt[-2]; // Like vectors and string the subscipt in arrays don't take unsigned numbers 
	// So this is equivalent of ia1[0]
	std::cout << i << " " << k << std::endl;
	
	
return 0;
}