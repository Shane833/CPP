#include <print>

int factorial(int val){
	if(val != 0){
		return val * factorial(val - 1);
	}
	return 1;
}

int main(){
	int x = 6;
	std::println("{}! = {}", x, factorial(x));
}