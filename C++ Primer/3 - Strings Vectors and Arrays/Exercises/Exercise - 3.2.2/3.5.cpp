#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

int main()
{
	string large_string;
	string temp;
	
	while(cin >> temp){
		large_string += " " + temp;
	}
	
	cout << large_string << endl;
	
	return 0;
}
