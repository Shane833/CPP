#include <iostream>
#include <stdexcept>

int main()
{
	int a = 0, b = 0;

	
	do{
		std::cout << "Enter two number : ";
		std::cin >> a >> b;
		try{
			if(0 == b){
				throw std::runtime_error("Trying to divide by Zero!");
			}
		}catch(std::runtime_error err){
			std::cout << "Operation Failed : " << err.what() << std::endl;
			std::cout << "Try Again?(y/n)";
			char c = 0;
			std::cin >> c;
			if(c == 'n') break;
		}
	}while(true);

}