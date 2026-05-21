#include <iostream>
#include <string>
#include <deque>

int main(){
    std::string word;
    std::deque<std::string> sdq;

    while(std::cin >> word){
        sdq.push_back(word); 
    }
    
    std::cout << "Printing the deque elements : " << std::endl;
    for(auto b = sdq.cbegin(); b != sdq.cend();b++){
        std::cout << *b << std::endl;
    }
    return 0;
}
