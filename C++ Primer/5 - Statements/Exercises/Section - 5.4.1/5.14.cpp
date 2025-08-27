#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> svec;
	std::string in;
	std::string current;
	std::string max;
	int max_count = 0;
	int current_count = 0;

	// Storing the input first
	while(std::cin >> in){
		svec.push_back(in);
	}

	// only reading input not updating anything
	auto beg = svec.cbegin(), end = svec.cend();

	current = *beg; // stores the first element

	while(beg != end){
		// If string matches increment count
		if(current == *beg){
			current_count++;
		}else{ // else update the current string
			current = *beg;
			current_count = 1; // The word has appeared so its count is 1
		}

		// Check if the current string has the highest count
		if(current_count > max_count){
			max_count = current_count;
			max = current;
		}

		beg++;
	}


	std::cout << "The word " << max << " appeared " << max_count << " times" << std::endl;
	
}