#include <vector>

using std::vector;

int main()
{
	// first way is list initialization
	vector<int> v1 {42,42,42,42,42,42,42,42,42,42}; // list initialization
	vector<int> v2 (10, 42); // initializes a vector of size 10 each with a default value of 42
	vector<int> v3 = v1; /* or vector<int> v3(v1); */ // copy intialization from another vector
	return 0;
}