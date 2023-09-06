#include <iostream>
#include <vector>

int main(int argc,char *argv[]){

	// Though we can use subscripts to access the members of a string or a vector there is much more general mechanism called iterator
	// In addition to vector there are several containers in the C++ library and not all of them use subscript operator (string is not a container but can process container like operations)
	// Like pointers, iterators too have an indirect access to the elements of the container

	// Using an iterator
	std::vector<int> numbers(10,3);
	auto b = numbers.begin(), e = numbers.end();
	// Unlike pointers they don't use the address of the operator to obtain the position
	// Infact, those who implement iterators already have special functions to returnt he values of the iterator
	// For eg: vector_name.begin() give the starting iterator value and similarly vector_name.end() gives the position one past the end
	// This iterator denotes the off-the-end iterator and is a special marker and reaching it will tell that all the elements have been processed
	// If the vector is empty then the begin() will return the same iterator as that of the end()

	// Iterator Operations

	// Comparision of Iterator
	/**
	To compare the iterator you can use the '==' or '!=' operators
	Two iterators are equal if they both denote the same element or if both are off-the-end iterator
	Otherwise they are unequal
	*/

	// Deferencing Iterators
	/**
	Like pointers, we can dereference the iterators to obtain the value that the iterator is denoting
	Like pointers, we can only deference the valid iterators, dereferencing an invalid or off-the-end iterator will result in undefined behaviour	
	*/
	// So now we can write a program to capitalize the letter of the string
	std::string s("shane");
	if(s.begin() != s.end()) // checking if the string is empty
	{	
		auto it = s.begin(); // giving the iterator 'it' the starting position	
		*it = toupper(*it);	// making changes to the string by dereferecing the iterator and changing the letter to an uppercase one
		std::cout << s + "\n";
	}
	
	// Moving iterators from one element to another
	/**
	Iterators use '++' operator to move from one element another by increasing the value by one position
	**Note : The iterator returned by end() does not denote any value and hence must not be incremented or decrement or dereferenced
	*/
	// Using incrementation to capitalize the letter in the above string
	for(auto it = s.begin();it != s.end() && !isspace(*it);++it){
		*it = toupper(*it);
	}
	std::cout << s + "\n";

	// Types of Iterators
	/**
	Like the size_type of vectors and strings, we generally don't know the precise type of the iterators
	There are mainly two types of iterators 'iterator' and 'const_iterator'
	*/
	// Some of the examples
	std::vector<int> ivec(10,1);
	std::vector<int>::iterator it; // This type of iterator can both read and write to the vector ivec, same works for a string
	it = ivec.begin();
	*it = *it - 2;
	std::cout << *it << "\n";
	std::string::iterator st;
	st = s.begin();
	*st = *st + 4;
	std::cout << s + "\n";
	
	std::vector<int>::const_iterator vt; // However this type of iterator has only read access, same with the string
	std::string::const_iterator cst;

	// The begin and end operation
	/**
	The kind of iterator returned by begin() and end() depends on what kind of container they are operating on
	if the container is of type const then the iterator returned will be of type const_iterator else it will a simple iterator
	But this is not useful when we explicitely want a const_iterator for a non-const container
	This problem has been solved in the new library where two new functions were introduced to tackle this problem
	*/
	// These new functions are cbegin() and cend()
	auto d = ivec.cbegin(); // This will return a const_iterator despite the fact that our vector is non-const

	// Combining dereference and member access
	/**
	When we dereference an iterator we get the value of the object that the iterator denotes
	However, it may be the case that our container is comprised of different class object and they have their own data member that we might need to access
	For eg: If we have a vector of string and we want to check if the string is empty, then we can do so by combining deference and member access
	*/
	std::vector<std::string> svec(10,"Hi");
	// now in order to call the member function by iterator , you must follow this rule '(*iterator).member_function()'
	auto sit = svec.begin();
	if((*sit).empty()){
		std::cout << "Empty String\n";
	}
	else{
		std::cout << "Contains Something\n";
	}
	// However, if you will do '*sit.empty()' this will result in an error because then you are trying to access empty() function from 'sit' which is an iterator and not a string and does not contain the empty function
	
	// Though you can use the arrow member access on the iterator to do the same steps and it would not require any deferencing of the iterator
	if(sit->empty()){ // This is valid and works without deferencing
		std::cout << "Empty String\n";
	}
	else{
		std::cout << "Contains Something\n";
	}

	// Some vector operations can invalidate the iterators
	/**
	When we are looping through a vector using iterators that it should be kept in mind not to add element to the vector using push_back
	This will invalidate all the iterators and now the end position would have shifted from its original place to the other and the loop will be incomplete
	*/

	// Iterator arithemetic
	
	/*
	All library containers can use iterators through increment or decrement and moving form one element to another at a time
	However, in case of vector and string they have special iterator function that can help them move among the elements in a much more dynamic way, they also support relational opetators
	*/
	// Arithemetic operations on Vectors
	// We can add or subtract an integral value from the iterator but the resulting iterator must denote the element within that vector or string
	std::vector<int> vi(20,1);	
	auto mid = vi.begin() + vi.size() / 2; // this results with an iterator that denotes the 11th element or simply vi[10] as the index starts at 0
	std::cout << *mid << "\n";

	// In addition to simple arithemetic operations we can also use relational operator
	// We can check if any iterator is denoting element from the first half or the second half of the vector or string
	auto iter = vi.begin();
	if(iter < mid) // we can directly compare two iterators as long as they denote within the same library container
	{
		std::cout << "This itertor is in the first half\n";
	}
	
	// We can also add or subtract two iterators as long the resulting iterator denotes within the same library container
	// When we subtract two iterator we get the distance between them meaning how much we would have to go from one itertor to reach the other
	// On subtracting the type of the result is difference_type, both vectors and strings define difference_type and this is a signed variable as the result can somtimes be negative
	std::cout << vi.begin() - mid << "\n"; // Here we can obtain the position of the mid iterator w.r.t the starting iterator

	// Using arithemetic operator to do binary search
	// One classic algorithm that we can implement with the help of iterators is the binary search
	// In a sorted database we can search our deisred value with the help of binary search
	// It works by breaking the database into halves and then searching our value in whichever half it lies then again we break it in halves and so on
	
	std::vector<int> vnum{1,2,3,4,5,6,7,8,9,10,11};
	auto starting = vnum.begin();
	auto ending = vnum.end();
	auto middle = starting + (ending - starting) / 2;
	int sought = 0;
	std::cout << "Enter the number you wish to seek : ";
	std::cin >> sought;
	
	while(middle != ending && *middle != sought) // first we will check that our middle point should not be the end and if its value is what we are looking for
	{
		if(sought < *middle) // if element we want to look for is less than the middle point than we will only look in the first half 
		{
			ending = middle; // here our new end point is the middle point which would confine us to the first half of the database
		}
		else
		{
			starting = middle + 1; // However if what we want is greater than the middle value then we will check in the second half, now the new starting point would be the next element after the middle 
									// this will confine us into the second half
		}
		
		middle = starting + (ending - starting) / 2; // now the new value would be the midpoint of whichever half we are in
	}

	std::cout << "Element " << *middle << " has been found at " << middle - vnum.begin() + 1 << "th index\n"; // now the middle iterator would denote the element that we wanted 
	
	

}