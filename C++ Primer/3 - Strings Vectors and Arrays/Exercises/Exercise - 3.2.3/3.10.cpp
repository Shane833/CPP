#include <iostream>
#include <cctype>
#include <string>

using std::cout, std::cin, std::endl, std::string;

int main()
{
	string input;
	
	getline(cin, input); // read the string with punctuations and spaces
	
	for(char c : input){
		if(!ispunct(c)){
			cout << c;
		}
	}
	cout << endl;
}