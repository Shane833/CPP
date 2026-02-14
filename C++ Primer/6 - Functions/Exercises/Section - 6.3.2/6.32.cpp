#include <iostream>

int &get(int *arr, size_t index){
	return arr[index];
}

int main(){
	int ia[10];
	for(int i = 0;i != 10;i++){
		get(ia,i) = i;
	}
	std::cout << ia[3] << std::endl;
}