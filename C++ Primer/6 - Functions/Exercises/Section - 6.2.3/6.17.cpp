#include <print>
#include <cctype>
#include <string>

bool containsCapital(const std::string &s){
	for(auto c : s){
		if(isupper(c)) return true;
	}
	return false;
}

void makeUpperCase(std::string &s){
	// converts to upper case
	for(auto &c : s){
		c = toupper(c);
	}
}

int main(){
	std::string s("Hello!");
	std::println("'{}' contains captial? {}",s, containsCapital(s));
	makeUpperCase(s);
	std::println("'{}' is now all uppercase",s);
}

// In the first function we were just using the value
// so we passed a const ref but in the second function
// we had to actually modify it hence we needed to pass
// a plain ref.