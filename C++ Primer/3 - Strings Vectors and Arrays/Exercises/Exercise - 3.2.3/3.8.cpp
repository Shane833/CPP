#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

int main()
{
	string a("Shivang");
	
	decltype(a.size()) i = 0;
	
	while(i < a.size()){
		a[i] = 'X';
		i++;
	}
	
	for(i = 0;i < a.size();i++){
		a[i] = 'X';
	}
	
	cout << a << endl;
}