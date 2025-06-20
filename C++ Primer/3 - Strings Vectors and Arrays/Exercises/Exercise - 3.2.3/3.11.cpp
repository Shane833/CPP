#include <iostream>
#include <string>

using std::string;

int main()
{
	const string s = "Keep out!";
	for (auto &c : s){
		c = 'x'; // c is a read only reference i.e. const char &
	}
}