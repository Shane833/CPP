#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> svec{"Hello", "Hi", "Whats up!"};

	auto iter = svec.begin();

	std::cout << *iter.empty() << std::endl;
}