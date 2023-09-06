#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char *argv[])
{
	/*
	There are many ways to initialize a library string
	-> You can do with a null terminated character array or simply a string literal
	-> You can use the string compound assignment to a string literal (Ex : string s += "Hello")
	However, there is no direct way to use a library string as C-style string, i.e. you cannot
    directly initialized a character pointer from a library string.
	-> char *str = s; This is illegal
	However, we will use a method of string object : c_str(), which returns a c-style string i.e. the base pointer
    to the 
	*/
}