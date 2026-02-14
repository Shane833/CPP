#include <print>
#include <iostream>
#include <vector>

void print(const std::vector<int> &vi){
	static int index = 0;
	if(index == vi.size()) return;
	//std::cout << vi[index++] << std::endl;
	std::println("{}", vi[index++]);
	return print(vi);
}


int main(){
	std::vector<int> v{1,2,3,4,5};
	print(v);
}