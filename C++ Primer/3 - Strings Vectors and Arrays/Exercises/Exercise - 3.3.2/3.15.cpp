#include <iostream>
#include <vector>
#include <string>

using std::cout, std::cin, std::endl, std::vector, std::string;

int main()
{
	string s;
	vector<string> svec;
	
	while(cin >> s){
		svec.push_back(s);
	}
	
	// print
	for(string c : svec){
		cout << c << endl;
	}
}