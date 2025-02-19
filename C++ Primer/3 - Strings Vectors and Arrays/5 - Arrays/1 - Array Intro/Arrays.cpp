#include <iostream>
#include <string>

int main(int argc,char *argv[])
{
	// Arrays are container somewhat like vectors but with some different functionality
	// There are no special inbuilt functions for arrays to add new elements dynamically
	// They have a fixed size
	// Since arrays have a fixed size they have better run time performace, however this performance comes at the cost of loss of flexibility

	/* Note: If you don't know how many elements you need, use a vector */

	// INITIALZING THE BUILT-IN ARRAYS
	// Arrays are compound type
	// They can be declared in the form 'type name[dimension]'
	// The number of elements in an array is a significant part of its type and hence the size of the array should be a known at compile time and should be a constant expression

	unsigned count = 42; // Not a constant value and cannot be used to initalize an array
	constexpr unsigned sz = 10;  // This is a constant and can be used to initialize an arrays
	int arr[10]; // This is an array of 10 integers
	int *parr[sz]; // This is an array of 42 pointers to ints
	std::string bad[count]; // This will generate an error as count is not a constant expression
	
	// By default the elements in an array are default initialized and this within a function will have undefined values for each element
	// Like vectors arrays hold objects and therefore there are no arrays of reference

	// EXPLICITELY INITIALIZING THE ARRAY ELEMENTS
	// We can list initialize  the elements of an array
	// Here in this case we have the option to omit the dimension
	// Here the dimensions of the array will automatically be set according to the number of the elements defined in the array
	// if the dimension of the array is already defined then the element in the list must not exceed the size of the array	
	// However if you list initialized less elements than the size then the rest of the elements will be default initialized to 0 or equivalent
	
	constexpr unsigned size = 3;
	int ial[size] = {0,1,2}; // This is an array of 3 ints, 0,1,2
	int a2[] = {0,1,2}; // An array of size 3
	int a3[5] = {0,1,2}; // This will default the rest valued to so this array is equivalent of {0,1,2,0,0}
	std::string a4[3] = {"Yo","hi"}; // This is equivalent of {"Yo","hi",""} the last one is an empty string
	//int a5[2] = {1,2,3}; This will give an error as there are more arguments than the size of the array

	// CHARACTER ARRAYS	ARE SPECIAL
	// character arrays have an additional form of intialization
	// We can initialize such array with string literals
	// Its important to note that the string literals end with a null character and this is copied into the array
	
	char c1[] = {'C','+','+'}; // List initialization without a null character
	std::cout << c1 << std::endl; // Now when we print it out it displays junk after the bounds of the array
	char c2[] = {'C','+','+','\0'}; // List initialization with a null character which will not display the junk
	char c3[] = "C++"; // Here the null character is already added as it is present in the string literal
	//const char c4[7] = "Shivang"; // This will give an error as there is no space to store a null character

	// NO COPY OR ASSIGNMENT
	// We cannot initialize an array as a copy of another not is it possible to assign one like this
	// int ar[] = {1,2,3};
	// int ar2[] = ar; This is wrong

	// UNDERSTANDING COMPLICATED ARRAY DECLARATION
	// Like vectors, arrays can hold object of almost anytype
	// Since arrays themselves are objects hence we can have pointers and references to these arrays
	// Defining arrays to hold pointers is straight forward, however defining a pointer or reference to an array is bit complicated
	
	int *ptr[10]; // ptr is an array of 10 pointers which points to int
	//int &ref[10]; You can't have an array of references
	int (*parray)[10] = &arr; // Understanding these declaration have to be done from inside out, start with the name now the (*parray) means that this is a pointer, then on the right the dimensions tells us that it points to an array of size 10, then looking on the left it tell that the type of this array is int
	// Hence parray is a pointer to an array of 10 ints
	int (&refarray)[10] = arr; // Again understanding the same logic we can say that refarray is a reference which refers to an array of size 10 and its type is int
	// Hence refarray refers to an array of 10 ints
	
	// There are no limits as to how many type modifiers can be used
	int *(&rarray)[10] = ptr; // Here rarray is a reference to an array of size 10 which holds 10 pointers to ints
	// rarray is a reference to an array of ten pointers
	
	// ACCESSING THE ELEMENTS OF AN ARRAY
	// When you want to traverse a whole array use range-for as the program already know the size of the array
	
	int scores[10] = {}; // Doing so will initialize all the elements to zero
	std::size_t amount = sizeof(scores); // whenever you want to deal with sizes of objects use the size_t which is defined in the standard library
	std::cout << amount << std::endl;
	for(auto i : scores)
	{
		std::cout << i << "\n";
	}

	// CHECKING SUBSCRIPT VALUES
	// Like vectors and strings, you as a programmer are responsible for checking that the subscript don't refer outside of the bounds of the arrays
	// The subscript must be greater than equal to zero and less than the dimensions of the array
	// The most commmon sorts of security problems are the buffer overflow bugs, such bugs occur when the program fails to check the subscript and uses memory oustide of the bounds
}