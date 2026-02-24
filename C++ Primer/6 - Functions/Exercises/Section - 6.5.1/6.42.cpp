#include <iostream>
#include <print>
#include <string>

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending = "s"){ // we can bind a const ref to a literal so its ok
	return (ctr > 1) ? word + ending : word;
}

int main()
{
	std::println("Singular of failure : {}", make_plural(0,"failure"));
	std::println("Singular of success : {}", make_plural(0,"success"));
	std::println("Plural of failure : {}", make_plural(2,"failure"));
	std::println("Plural of success : {}", make_plural(2,"success"));

}

