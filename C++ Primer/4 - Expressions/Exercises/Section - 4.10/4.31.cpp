#include <iostream>
#include <vector>

using std::vector, std::cout, std::endl;

int main()
{
	vector<int> ivec {5,4,3,2,1};
	vector<int>::size_type cnt = ivec.size();
	// assign values from size .. .1 to the elements in ivec
 	for(vector<int>::size_type ix = 0;ix < ivec.size(); ix++,cnt--)
 		ivec[ix] = cnt;

 	for(auto x : ivec){
 		cout << x << endl;
 	}

}