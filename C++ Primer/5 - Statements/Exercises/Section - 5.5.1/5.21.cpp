#include <iostream>
#include <cctype>
#include <string>

int main()
{
	std::string temp, current;
	bool repeated = false;

	while(std::cin >> temp){
		if(temp == current){
			if(isupper(temp[0])){
				repeated = true;	
				break;
			}
		}else{
			current = temp;
		} 
		
	}

	if(repeated){
		std::cout << current << " was repeated." << std::endl;
	}
	else{
		std::cout << "No word was repeated." << std::endl;
	}
}