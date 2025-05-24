#include <iostream>

int main()
{
	int i = 0, &r = i;
	
	auto a = r; // the type modifier & is dropped and it only takes into account the base type
				// hence a is an int
				
	const int ci = i, &cr = ci; // ci is a const int and cr is a const int &
	auto b = ci; // top level const is dropped unless specified explicitely hence b is int
	auto c = cr; // again same happens and c is an int
	auto d = &i; // d is a ptr to int
	auto e = &cr; // now only const type can point to const objects hence const is important in this case
				  // hence e is of type const int *s
	
	const auto f = ci; // now the const is explicitely defined hence the type of f is const int
	
	const auto &g = ci; // now since we have explicitely defined const with &, hence the type of
						// g is const int &
	// auto &h = 42; This will throw an error as we cannot bind plain reference to a literal
	
	const auto &j = 42; // as we've studied it binds to a temp object
	
	// TEST
	
	a = 42;
	b = 42;
	c = 42;
	d = 42;
	e = 42;
	g = 42;
	
	
}