#include <iostream>
#include <vector>

int main()
{
	std::vector<int> ivec{1,2,3,4};

	for(auto &x : ivec){
		x = x % 2 ? x * 2 : x;
	}

	for(auto x : ivec){
		std::cout << x << std::endl;
	}
}