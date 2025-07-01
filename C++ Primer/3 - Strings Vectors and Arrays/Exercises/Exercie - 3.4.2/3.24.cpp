#include <iostream>
#include <vector>
#include <format>

using std::cout, std::cin, std::endl, std::vector;

int main()
{
	vector<int> ivec{1,2,3,4,5,6};

	// Print the sum of adjacent elements
	for(auto it = ivec.cbegin();it + 1 != ivec.cend();it++){
		cout << std::format("The sum of {} and {} is {}",*it, *(it + 1), *it + *(it + 1)) << endl;
	}
	// Trying to fetch the value from last 
	//auto try_itr = ivec.cend() -ivec.cbegin() - 1;
	//cout << *(ivec.cbegin() + try_itr) << endl;
	
	// Print sum of first and last elements
	for(auto it = ivec.cbegin(); it != ivec.cbegin() + ivec.size() / 2; it++){
		auto last = ivec.cend() - it - 1;
		cout << std::format("The sum of {} and {} is {}",*it, *(ivec.cbegin() + last), *it + *(ivec.cbegin() + last)) << endl;
	}
	
	return 0;
}

