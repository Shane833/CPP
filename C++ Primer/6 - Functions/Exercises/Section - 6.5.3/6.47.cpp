#include <print>
#include <iostream>
#include <vector>
#include <cassert>

void print(const std::vector<int> &vi){
	static int index = 0;
	if(index == vi.size()) return;
    #ifndef NDEBUG // Using this to optionally print information
     std::cout << "Size of vector : " <<  vi.size() << std::endl;
    #endif
     std::println("{}", vi[index++]);
	return print(vi);
}


int main(){
	std::vector<int> v{1,2,3,4,5};
	print(v);
}
