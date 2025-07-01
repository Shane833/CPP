#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cout, std::cin, std::endl, std::vector, std::string;

int main()
{
	// Lets create a string 
	string para1 = "first paragraph";
	string para2 = "second";
	string para3;
	string para4 = "last";
	// Add the strings to the vector
	vector<string> p_vec;
	p_vec.push_back(para1);
	p_vec.push_back(para3);
	p_vec.push_back(para4);
	// Make all the characters to be upper case in the first paragraph
	for(auto it = p_vec.begin(); it != p_vec.end() && !it->empty(); it++){
		for(auto &c : *it){
			c = toupper(c);
		}
	}
	// print the content
	for(auto it = p_vec.cbegin();it != p_vec.cend();it++){ // use const_iterators when you just want to read the values
		cout << *it << endl;
	}

	return 0;
}