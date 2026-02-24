#include <iostream>
#include <print>
#include <string>

inline const std::string &isShorter(const std::string &s1, const std::string &s2){
	return (s1 <= s2) ? s1 : s2;
}

int main(){
	std::string a("Hi");
	std::string b("Hello");

	std::println("Shorter of {} and {} is {}", a, b, isShorter(a,b));
}