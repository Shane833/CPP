#include <iostream>

/*
The problem in the code below is that the argument 
is gonna be evaluated as const int *, i.e. it will
lose its size info. So to fix this you should use
a pointer to an array of 10 ints.

void print(const int ia[10]){
	for(size_t i = 0;i != 10;++i){
		std::cout << ia[i] << std::endl;	
	}
}
*/

// So the correct way to enusre that the array
// being passed is actually of size 10 we can 
// use a reference to an array of 10 ints

void print(const int (&ia)[10]){ // this also enable checking at compile time so you can't pass an array of size other than 10
	for(size_t i = 0; i != 10;++i){
		std::cout << ia[i] << std::endl;
	}
}

int main(){
	int arr[10] = { 0 };
	print(arr);

}