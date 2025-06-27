#include <print>

int main()
{
	// This is the cool new feature of C++23
	// where you can just print things like this
	std::println("Yo, isn't this cool ?");
	// to make the project use
	// g++ -std=c++23 main.cpp -lstdc++exp
	// we link again stdc++exp since it is still considered experimental 
}