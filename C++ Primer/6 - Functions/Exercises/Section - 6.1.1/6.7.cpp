#include <iostream>

int call_func(){
	static int count = 0;

	return count++;
}

int main()
{
	for(int i = 0;i < 10;i++){
		std::cout << call_func() << std::endl;
	}
}