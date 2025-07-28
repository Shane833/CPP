#include <iostream>
#include <iterator>

int main()
{
	int ia[3][4] = {{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}
				   };

   // 1st method : using a range for
   std::cout << "Method 1 : Using Range For" << std::endl;
   for(auto &p : ia){ // It is mandotary that the outer loop variable is always are reference when using auto
                      // bcz if you don't do that you will simply get the pointer to the first array out of the 3 arrays
                      // and we simply can't iterate over a pointer 
   	for(auto x : p){ // since the elements themselves are int we make the looping variable to be int
   		std::cout << x << " ";
   	}
   	std::cout << std::endl;
   }
   
   
   // 2nd method: using pointers
   std::cout << "Method 2 : Using Pointers" << std::endl;
   for(auto p = ia;p != ia + 3;p++){ // p is of type int (*p)[4]
   	for(auto q = *p;q != *p + 4;q++){ // q is simply int *, while *p is int[4]
   		std::cout << *q << " ";
   	}
   	std::cout << std::endl;
   }

   // 3rd method: using iterators
   // For built in type containers like arrays std::begin and std::end returns pointers
   // to the first element and one past the last element in the array
   std::cout << "Method 3 : Using Iterators" << std::endl;
   for(auto p = std::begin(ia);p != std::end(ia);p++){ // Here p is the pointer to an arrays of arrays of size 4
   	// when we dereference p we get the underlying int[4] array
      for(auto q = std::begin(*p); q != std::end(*p);q++){ // Here q is the pointer to an int[4] arrays
   	     std::cout << *q << " "; // when we derefernce q , we the int element
   	}
   	std::cout << std::endl;
   }
}