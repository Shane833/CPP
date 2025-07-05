#include <iostream>

using std::cout, std::endl;

int main()
{
	int ia[10] = {}; // zeroes as they are value initialized

	for(size_t i = 0;i < 10;i++){
		ia[i] = i;
	}
	
	for(int i : ia){
		cout << i << " ";
	}
	cout << endl;
}