#include <iostream>
#include <string>

int main()
{
	do{
		std::string s1, s2;
		std::cout << "Enter two strings : ";
		if(std::cin >> s1 >> s2 && !s1.empty() && !s2.empty())
			std::cout << "Bigger string : " << (s1 > s2 ? s1 : s2) << std::endl;
	}while(std::cin);
}