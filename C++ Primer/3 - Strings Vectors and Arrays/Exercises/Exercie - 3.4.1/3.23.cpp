#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;

int main()
{
	vector<int> ivec(10, 20);

	for(auto it = ivec.begin(); it != ivec.end(); it++){
		*it = 2 * *it;
	}

	for(auto it = ivec.cbegin(); it != ivec.cend(); it++){
		cout << *it << endl;
	}

	return 0;
}