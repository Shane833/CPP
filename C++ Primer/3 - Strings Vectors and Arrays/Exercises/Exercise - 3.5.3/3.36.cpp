#include <iostream>
#include <iterator>
#include <vector>

using std::cout, std::endl, std::begin, std::end, std::vector;

int main()
{
	int arr1[] = {1,2,3,4,6};
	int arr2[] = {1,2,3,4,5};

	auto b1 = begin(arr1);
	auto b2 = begin(arr2);

	auto e1 = end(arr1);
	auto e2 = end(arr2);

	bool equal = true;

	// Now check equality
	if((e2 - b2) == (e1 - b1)){ // We make sure that sizes are equal
		for(;b1 != e1 && b2 != e2; ++b1, ++b2){ 
			// compare the values
			if(!(*b1 == *b2)){
				equal = false;
			}
		}
		if(equal)
			cout << "Arrays are Equal" << endl;
		else
			cout << "Arrays are not Equal" << endl;
	}
	else{
		cout << "Arrays are not Equal" << endl;
	}

	// Comparing Vectors
	vector<int> v1 = {1,2,3,4,6};
	vector<int> v2 = {1,2,3,4,5};

	if(v1 == v2)
		cout << "Vectors are Equal" << endl;
	else
		cout << "Vectors are not Equal" << endl;
	return 0;
}