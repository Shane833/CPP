#include <iostream>
#include <iterator>

using std::cout, std::endl, std::begin, std::end;

int main()
{
	int arr[5] = {1,2,3,4,5};

	int * b = begin(arr); // points to the first element in the array
	int * e = end(arr);

	while(b < e){
		*b = 0;
		b++;
	}

	// Lets print the elements
	for(auto b = begin(arr); b != end(arr); b++){
		cout << *b << endl;
	}

	return 0;
}