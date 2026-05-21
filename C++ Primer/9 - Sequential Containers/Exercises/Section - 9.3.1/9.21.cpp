#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> svec;
    auto iter = svec.begin();
        
    std::string word;

    while(std::cin >> word){                             
        iter = svec.insert(iter, word); // This is equivalent to push_front
                                        // However vector don't support push_front
                                        // Bcz insertion at the beginning would
                                        // require all the later elements to be
                                        // shifted to the right
    }

    std::cout << "Elements of svec : " << std::endl;
    for(std::string s : svec){
        std::cout << s << std::endl;
    }

    return 0;
}
