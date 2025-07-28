#include <iostream>

// defining a type alias
//typedef int int_array[4];
using int_array = int[4];


int main()
{
	int ia[3][4] = {{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}
				   };

   // 1st method : using a range for
   std::cout << "Method 1 : Using Range For" << std::endl;
   for(int_array &p : ia){ // since the type is int_array which means any type of data that can hold int arrays of size 4
                           // we can create a pointer or refernce to it
   	for(int x : p){ // since the elements themselves are int we make the looping variable to be int
   		std::cout << x << " ";
   	}
   	std::cout << std::endl;
   }
   
   // 2nd method: using subscripts
   std::cout << "Method 2 : Using Subscripts" << std::endl;
   int_array (&p)[3] = ia; // again using the refernce but this time its a little differnt
                           // since a[3] or 3[a] is equivalent we exploit that fact and create
                           // a reference to ia, bcz int_array type defines an int array of size 4
                           // and we say that we want a reference to a type which holds arrays of dimension 3
                           // and each of these arrays stores int_array (int[4]) type of data
                           // so in totality we get : (type [3]int[4]) which is equivalent to type int[3][4]
   for(int i = 0;i < 3;i++){
   	for(int j = 0;j < 4;j++){
   		std::cout << p[i][j] << " ";
   	}
   	std::cout << std::endl;
   }

   // 3rd method: using pointers
   std::cout << "Method 3 : Using Pointers" << std::endl;
   for(int_array * p = ia;p < ia + 3;p++){ // We point to an array which holds arrays of dimensions 4 or in this case has a type of int_array or int[4]
   	// since there are only only 3 arrays we make sure that the pointer don't point past it
   	for(int * q = *p; q < *p + 4;q++){ // Now when we dereference that pointer we will get the underlying array of size 4 or int_array or int[4]
   		// Since each array only holds 4 elements we make sure that it don't point out of bound i.e. base address + 4
   		std::cout << *q << " ";
   	}
   	std::cout << std::endl;
   }
   
}