#include <print>

// The function has to return an int value 
// so the return type should be int
int larger(const int *num_ptr, int  num){
	return *num_ptr < num ? num : *num_ptr;
}

int main(){
	int a = 3, b = 4;
	std::println("Larger of ({},{}) is {}", a, b, larger(&a, b));
}	