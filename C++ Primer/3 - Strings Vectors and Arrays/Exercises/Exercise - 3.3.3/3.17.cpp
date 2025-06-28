#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cout, std::cin, std::endl, std::string, std::vector;

int main()
{
	vector<string> strings;
	string value;
	// Read the input
	while(cin >> value){
		strings.push_back(value);
	}
	// Process by changing to upper cases
	for(auto & s : strings){ // need to add & to both loop since we cannot work on read only values
		for(auto & c : s){
			c = toupper(c);
		}
	}
	// Print the result
	for(auto s : strings){
		cout << s << endl;
	}

	return 0;
}