#include <iostream>
#include <vector>
#include <format>

using std::cout, std::cin, std::endl, std::vector;

int main()
{
	vector<int> v1;
	int temp = 0;
	// Read some numbers and add to vector
	while(cin >> temp){
		v1.push_back(temp);
	}
	// Print the sum of adjacent elements
	for(decltype(v1.size()) i = 0; i < v1.size() - 1; i++){ 
		cout << std::format("Sum of {} and {} : {}",v1[i], v1[i + 1], v1[i] + v1[i+1]) << endl;
	}
	// Print the sum of first and last elements and so on
	// Since we are dividing the space into half hence we will only go upto size/2
	for(decltype(v1.size()) i = 0; i < v1.size() / 2; i++){
		cout << std::format("Sum of {} and {} : {}",v1[i], v1[v1.size() - i - 1],v1[i] + v1[v1.size() - 1 - i]) << endl;
	}
	return 0;
}