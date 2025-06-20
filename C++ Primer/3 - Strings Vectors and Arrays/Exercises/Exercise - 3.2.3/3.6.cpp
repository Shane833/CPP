#include <iostream>

using std::cout, std::cin, std::endl, std::string;

int main()
{
	string a("Shivang");
	
	for(auto &c : a){
		c = 'X';
	}
	
	cout << a << endl;
}