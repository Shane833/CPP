#include <iostream>

int main()
{
	int ia[3][4] = {{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}
				   };

   // 1st method : using a range for
   std::cout << "Method 1 : Using Range For" << std::endl;
   for(int (&p)[4]: ia){ // getting a reference to an array which holds arrays of dimension 4
   	for(int x : p){ // since the elements themselves are int we make the looping variable to be int
   		std::cout << x << " ";
   	}
   	std::cout << std::endl;
   }

   // 2nd method: using subscripts
   std::cout << "Method 2 : Using Subscripts" << std::endl;
   for(int i = 0;i < 3;i++){
   	for(int j = 0;j < 4;j++){
   		std::cout << ia[i][j] << " ";
   	}
   	std::cout << std::endl;
   }

   // 3rd method: using pointers
   std::cout << "Method 3 : Using Pointers" << std::endl;
   for(int (*p)[4] = ia;p < ia + 3;p++){ // We point to an array which holds arrays of dimensions 4
   	// since there are only only 3 arrays we make sure that the pointer don't point past it
   	for(int *q = *p; q < *p + 4;q++){ // Now when we dereference that pointer we will get the underlying array of size 4
   		// Since each array only holds 4 elements we make sure that it don't point out of bound i.e. base address + 4
   		std::cout << *q << " ";
   	}
   	std::cout << std::endl;
   }
}