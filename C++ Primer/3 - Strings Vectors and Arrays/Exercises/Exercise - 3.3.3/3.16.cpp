#include <iostream>
#include <vector>
#include <string>

using std::cout, std::cin, std::endl, std::vector, std::string;

int main()
{
	// Lets declare/define our vectors
	vector<int> v1; // size is 0
	vector<int> v2(10); // size is 10
	vector<int> v3(10, 42); // size 10
	vector<int> v4{10}; // size 1
	vector<int> v5{10 , 42}; // size 2
	vector<string> v6{10}; // uses the paranthesis instead so size is 10
	vector<string> v7{10, "hi"}; // same logic, size is 10 all initialized to "hi"

	cout << "v1 :  " << v1.size() << endl;
	cout << "v2 :  " << v2.size() << endl;
	cout << "v3 :  " << v3.size() << endl;
	cout << "v4 :  " << v4.size() << endl;
	cout << "v5 :  " << v5.size() << endl;
	cout << "v6 :  " << v6.size() << endl;
	cout << "v7 :  " << v7.size() << endl;

	return 0;
}