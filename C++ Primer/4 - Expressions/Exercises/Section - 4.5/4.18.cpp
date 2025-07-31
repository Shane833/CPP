#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	std::vector<int> ivec{1,2,3,4};
	auto beg = ivec.begin();
	auto end = ivec.end();

	while(beg != end){
		std::cout << *++beg << std::endl;
	}
}