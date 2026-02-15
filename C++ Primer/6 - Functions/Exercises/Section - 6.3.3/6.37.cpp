#include <string>
#include <print>

// 1. Using type aliases
using strT = std::string[10];

strT odd = {"Odd"};
strT even = {"Even"};

strT &typeRefToString(int i){
	return (i % 2) ? odd : even;
}

// Using decltype
decltype(odd) &declRefToString(int i){
	return (i % 2) ? odd : even;
}

// Using trailing returns
auto trailingRefToString(int i) -> std::string (&)[10]{
	return (i % 2) ? odd : even;
}

void display(std::string (&iarr)[10]){
	for(int i = 0;i < 10;i++){
		std::print("{} ",iarr[i]);
	}
	std::println();
}

int main(){
	display(typeRefToString(0));
	display(declRefToString(1));
	display(trailingRefToString(0));
}