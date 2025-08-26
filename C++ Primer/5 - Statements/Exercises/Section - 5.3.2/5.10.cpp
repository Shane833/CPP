#include <iostream>
#include <string>

int main(){
	std::string s = "Write a program\nusing a series of\tif statements to count the number of \
	vowels in text read from cin";

	int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;

	for(char ch : s){
		switch(ch){ 
			case 'a': case 'A': // Instead of 
				a_cnt++;		// case 'a':
				break; 			// case 'A':
			case 'e': case 'E': // break; We can directly write them in a single line
				e_cnt++;
				break;
			case 'i': case 'I':
				i_cnt++;
				break;
			case 'o': case 'O':
				o_cnt++;
				break;
			case 'u': case 'U':
				u_cnt++;
				break;
		}
	}

	std::cout << "No. of a in string are : " << a_cnt << std::endl;
	std::cout << "No. of e in string are : " << e_cnt << std::endl;
	std::cout << "No. of i in string are : " << i_cnt << std::endl;
	std::cout << "No. of o in string are : " << o_cnt << std::endl;
	std::cout << "No. of u in string are : " << u_cnt << std::endl;

	
}