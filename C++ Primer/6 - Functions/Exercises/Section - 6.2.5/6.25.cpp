#include <print>
#include <string>

int main(int argc, char* argv[]){
	if(argc != 3) std::println("ERROR: only provide 2 arguments!");

	std::string s1 = argv[1];
	std::string s2 = argv[2];

	s1 += s2;

	std::println("After gluing them together : {}", s1);

}