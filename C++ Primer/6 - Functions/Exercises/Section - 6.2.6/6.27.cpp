#include <print>
#include <initializer_list>

void sum(std::initializer_list<int> li){
	int sum = 0;
	for(const int &n : li){
		sum += n;
	}	

	std::println("Sum : {}",sum);
}

int main(){
	sum({1,2,3,4,5});
}