#include <thread>
#include <iostream>

void hello()
{
	std::cout << "Hello concurrent world!" << std::endl;
}

int main()
{
	std::thread t(hello);
	t.join();
}