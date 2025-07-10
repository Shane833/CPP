#include <iostream>
#include <iterator>
#include <vector>

using std::cout, std::endl, std::begin, std::end, std::vector;

int main()
{
	vector<int> ivec(5, 10);

	int arr[5];

	for(size_t i = 0;i < 5;i++){
		arr[i] = ivec[i];
	}

	for(int x : arr){
		cout << x << endl;
	}


	return 0;
}