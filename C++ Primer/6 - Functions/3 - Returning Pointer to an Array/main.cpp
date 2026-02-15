#include <print>

// There are mainly two way:
// 1. Using Type Aliases
typedef int arrT[10]; // arrT represent an array of 10 ints
// equivalent declaration : using arrT = int[10];

arrT arr[2] = {
			   {1,2,3,4,5,6,7,8,9,10 },
			   {11,12,13,14,15,16,17,18,19,20}
			   }; // initializing the first array with all 0s and another 
							 // with all 1s

arrT *array(int i){
	return &arr[i]; // arr[i] is the element stored in the arr which itself is
					// of type arrT(array of ten ints) and we pass its address
}

void display(arrT *iarr){
	for(int i = 0;i < 10;i++){
		// MISTAKE : I wrote iarr[i] but this would be wrong bcz arrT * points to an array of 10 ints
		// hence everytime I was incrementing by i, I was moving to another array of ten ints
		// and accidently accesssing uinitialized memory which was wrong
		// so we select the current array by using the index 0, and then accessing the underlying
		// array of 10 ints with i
		std::println("{}",iarr[0][i]);
	}
}

// 2. Another way is just by using a function 
int (*retArrayOfTenInts(int i))[10]{ // this is a function that returns a pointer to an array of size 10
									 // the size of the array is passed at the end		
	return &arr[i];
} 


int main(){
	display(array(1));
	display(retArrayOfTenInts(0)); // great works
}