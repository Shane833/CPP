#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

int main()
{
	string first, second;
	cout << "Enter two strings : ";
	cin >> first >> second;
	
	/*
	if(first == second) cout << "Both strings are Equal!" << endl;
	else first > second ? cout << first << " is Larger" << endl : cout << second << " is Larger" << endl;
	*/
	if(first.size() == second.size()) cout << "Both strings have Equal Length!" << endl;
	else first.size() > second.size() ? cout << first << " is Longer" << endl : cout << second << " is Longer" << endl;
	return 0;
}