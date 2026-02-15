#include <print>

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

auto retArrayPtr(int i) -> int (*)[5]{ // returns a pointer to an array of 10 ints
	return (i % 2) ? &odd : &even;
}

void display(decltype(odd) *iarr){ // we can use decltype operator to specify the type that iarr is a pointer
								   // to an array of 5 ints.
	for(int i = 0;i < 5;i++){
		std::println("{}",iarr[0][i]);
	}
}

int main(){
	display(retArrayPtr(0));
	display(retArrayPtr(1));
}