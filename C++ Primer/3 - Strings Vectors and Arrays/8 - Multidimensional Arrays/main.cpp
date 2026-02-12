// Code for looping through multi-dimensional arrays
#include <iostream>
#include <typeinfo>
#include <iterator>

int main()
{
	int arr[3][3] = {{1,2,3},
					 {4,5,6},
					 {7,8,9}};

   int * p = arr[0]; // I believe it should return an array of size 3 which is the first row
   					 // Although I believe that this will not work as a single pointer can't point to
   					 // an entire array
   	// Ok well it works so I guess instead of getting the address of the array which is equivalent to
    // getting the address to the first element of the array
   std::cout << *p << std::endl; // should get 1
   /*
   for(int (&x)[3] : arr){ // Now what do I think is the type of x, I think it should be const ref or pointer to the array
   		std::cout << typeid(x).name() << std::endl;
   		// Alright so I was right it was a Pointer to int
   		for(auto y : x){ // Now what should be the type of y? pointer to pointer to int ?? 
   			std::cout << typeid(y).name() << std::endl;

   		}
   }
   */ // So basically we create a reference to the array of fixed size and it is necessary that its reference

   int (*ptr)[3] = arr; // points to an array of ints of dimensions 3
   ptr++; // now this will be incremented by the size of the array
   		// and will now point to the second array if it exist

   //auto ptr = arr;
   int * q = *ptr; // since this will return an array, we can point to the first element
   //std::cout << typeid(ptr).name() << std::endl;
   std::cout << *q << std::endl; // should print 4

   // We can also use library begin and end or simple for loops with auto
   for(auto p = std::begin(arr);p != std::end(arr);p++){
   	for(auto q = std::begin(*p);q != std::end(*p);q++){
   		std::cout << *q << std::endl;
   	}
   }

   // This would mean that (Alright I'll come back to it later)
   int[3] * ptrs = arr; // is also valid ?? 
   // NOPE: This is not valid
}
