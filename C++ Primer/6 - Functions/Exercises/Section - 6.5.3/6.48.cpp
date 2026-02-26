#include <iostream>
#include <string>
#include <cassert>

int main(){
    std::string sought = "Hi";
    std::string s;

    while(std::cin >> s && s != sought){}
    
    assert(std::cin);

}
