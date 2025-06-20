#include <iostream>

using std::cout, std::cin, std::endl, std::string;

int main()
{
	string a("Shivang");
	
	for(char c : a){
		c = 'X'; // should throw an error, well didn't throw an error
		// as it just reads the value of the character and is completely
		cout << c << endl;
	}
	
	cout << a << endl;
}