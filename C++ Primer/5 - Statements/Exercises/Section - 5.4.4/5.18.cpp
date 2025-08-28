#include <iostream>

using std::cout, std::cin, std::endl;

int main()
{
	do{
		int v1, v2;

	if(cin >> v1 >> v2)
		cout << v1 << " and " << v2 << endl;
	}while(cin); // Since there is only one std input stream hence it is global and any changes are reflected everywhere
}
