#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;

int main()
{
	int i = 0;
	vector<int> ivec;
	
	while(cin >> i){
		ivec.push_back(i);
	}
	
	// print
	for(int c : ivec){
		cout << c << endl;
	}
}