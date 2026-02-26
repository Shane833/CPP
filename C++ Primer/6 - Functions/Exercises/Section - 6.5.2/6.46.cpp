#include <iostream>
#include <print>
#include <string>

/*
constexpr const std::string &isShorter(const std::string &s1, const std::string &s2){
	return (s1 <= s2) ? s1 : s2;
}
*/
const std::string &isShorter(const std::string &s1, const std::string &s2){
	return (s1 <= s2) ? s1 : s2;
}


int main(){
	
	//constexpr std::string s = isShorter("Hi", "Hello");
    constexpr std::string f = "Hey there!";
	std::string s = isShorter("Hi", "Hello"); // This is ok bcz "Hi" and "Hello" are not local objects
											  // they are declared by the callee hence the temporary
											  // objects that are bound to them have an lifetime extension
											  // until the evaluation of the expression i.e. the function itself
	// So you can use them in a print call bcz the temporary objects are still alive on the same line
	// but you can't have a reference to the result bcz the temporary objects that are point by the
	// const references will be destroyed and will become a dangling reference
	// However we can assign the value of the result to a regular string bcz it will copy-initialize
	// the string using the const reference, so the new string will have its own independent copy
	// and would not be depending on the temporary objects. 

	std::println("{}", s);
}
