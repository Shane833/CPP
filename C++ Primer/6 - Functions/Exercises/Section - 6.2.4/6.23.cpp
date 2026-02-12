#include <print>
#include <iterator>

void print(const int *beg, const int *end){
	if(beg && end){
		while(beg != end){
			std::println("{}", *beg++);
		}
	}
}

int main(){
	int num = 6;
	int *ptr = &num;

	int arr[] = {1,2,3};
	// int *arr_ptr = arr; std::begin() and std::end() won't work for pointers
						 // bcz an array is fixed in size and pointers just contain
						 // the address and no size info like array whose size is
						 // size is known at compile time

	print(std::begin(arr), std::end(arr));

	// works bcz we are just passing pointers we can do this
	print(ptr, ptr+1);

}