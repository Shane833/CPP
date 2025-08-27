#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1 = {0,1,1,2};
	std::vector<int> v2 = {0,1,1,2,3,5,8};
	bool is_prefix = true;

	// First check the length
	decltype(v1.size()) size = 0;

	if(v1.size() < v2.size()){
		size = v1.size();
	}else{
		size = v2.size();
	}

	for(decltype(size) i = 0;i < size; i++){
		if(v1[i] > v2[i]){
			is_prefix = false;
			break;
		}
	}

	std::cout << "Is v1 prefix of v2 : " << (is_prefix ? "True" : "False") << std::endl;
}