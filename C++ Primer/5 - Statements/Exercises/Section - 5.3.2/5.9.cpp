#include <iostream>
#include <string>

int main()
{
	std::string s = "Write a program using a series of if statements to count the number of \
	vowels in text read from cin";
 	int vowel_cnt = 0;

    for(char ch : s){
    	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u')
    		vowel_cnt++;
    }

    std::cout << "No. of vowels in string are : " << vowel_cnt << std::endl;
}