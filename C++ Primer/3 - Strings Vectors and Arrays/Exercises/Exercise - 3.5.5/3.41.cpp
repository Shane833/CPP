#include <iostream>
#include <iterator>
#include <vector>

using std::cout, std::endl, std::begin, std::end, std::vector;

int main()
{
	int arr[] = {1,2,4,5,6,7};

	vector<int> ivec (begin(arr), end(arr)); // initialize vector from built-in array

	for(int i : ivec){
		cout << i << endl;
	}
}