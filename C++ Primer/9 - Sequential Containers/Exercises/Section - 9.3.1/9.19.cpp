#include <iostream>
#include <string>
#include <list>

int main(){
    std::string word;
    std::list<std::string> slist;

    while(std::cin >> word){
        slist.push_back(word); 
    }
    
    std::cout << "Printing the deque elements : " << std::endl;
    for(auto b = slist.cbegin(); b != slist.cend();b++){
        std::cout << *b << std::endl;
    }
    return 0;
}
