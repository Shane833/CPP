#include <iostream>

using std::cout, std::endl;

int main()
{
	int arr[] = {1,2,3,4,5,6};

	int * p1 = arr;
	int * p2 = &arr[5];

	p1 += p2 - p1;

	cout << *p1 << endl;
	return 0;
}