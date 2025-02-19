#include <iostream>
#include <vector>

int main(int argc,char *argv[]){

	// You can add/append and remove elements from a vector at runtime 
	// This makes the vectors very useful for dynamic memory management
	std::vector<int> ivec; // declaration of an empty vector
	for(int i = 0;i != 100;i++){
		ivec.push_back(i); // In order to append the elements you use the push_back method and providng the value of the elements in the arguments
		std::cout << ivec[i] << "\n";
	}
	// You can also use insert to add elements at speicified index
	
	// another example with strings
	std::string word;
	int i = 0;
	std::vector<std::string> text;
	while(std::cin >> word){ // read the string until the end of the file
		text.push_back(word);
		std::cout << text[i] << "\n";
		i++;
	}
	std::cout << "Size : " <<  ivec.size() << "\n"; // the size of the vector correspond to the number of elements present in it
	
	ivec.clear(); // this method will set all the elements of a vector to the equivalent of 0.
	std::vector<int> temp;

	//ivec = temp;

	for(int i = 0;i < 100;i++){
		std::cout << ivec[i] << "\n";
	}

	std::cout <<"Size : " << ivec.size() << "\n";

	
}