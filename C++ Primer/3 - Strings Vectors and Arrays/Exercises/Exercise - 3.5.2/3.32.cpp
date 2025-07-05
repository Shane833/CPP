#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

int main()
{
	int ia[10] = {}; // zeroes as they are value initialized

	for(size_t i = 0;i < 10;i++){
		ia[i] = i;
	}

	// declare an array for copying
	int ia_copy[10];
	// copy the contents
	for(size_t i = 0; i < 10; i++){
		ia_copy[i] = ia[i];
	}
	
	for(int i : ia_copy){
		cout << i << " ";
	}
	cout << endl;

	// using vectors
	vector<int> ivec(10);
	for(decltype(ivec.size()) i = 0;i < ivec.size(); i++){
		ivec[i] = i;
	}

	// vector for copy
	vector<int> ivec_copy(ivec);

	// display the vector
	for(auto i : ivec_copy){
		cout << i << " ";
	}
	cout << endl;

}