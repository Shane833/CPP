#include <iostream>
#include <string>

std::istream &print(std::istream &is){
    std::string s;    
    while(/*is >> s || */!is.eof()){ // Specifically checking when the stream hits eof
        is >> s;
        std::cout << s << std::endl;
    }
    std::cout << "END OF FILE" << std::endl; 
    // When end of file is hit, reset the state
    is.clear();

    return is;
}

int main(){
    print(std::cin);
}
