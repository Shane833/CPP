#include <iostream>
#include <vector>

int main(int argc,char *argv[])
{
	
	std::vector<int> ivec(10,20);
	
	
	for(auto it = ivec.begin(); it != ivec.end();++it){
		
		*it = *it * 2;
		std::cout << *it << "\n";
	}














}