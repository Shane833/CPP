#include <iostream>

int main()
{
	int currVal = 0, val = 0;
	
	if(std::cin >> currVal){ // We make sure that valid data has been entered
		int cnt = 1;
		while(std::cin >> val){
			if(val == currVal){
				++cnt;
			}else{
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}	
		}
		
		// We print the count of the last element
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}
	return 0;
}