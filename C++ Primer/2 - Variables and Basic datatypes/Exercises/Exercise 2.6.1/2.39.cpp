#include <iostream>

struct Foo {/* Empty */}

// It throws the following error
/*
error: expected ‘;’ after struct definition
    3 | struct Foo {/* Empty */}
*/

int main()
{
	return 0;
}