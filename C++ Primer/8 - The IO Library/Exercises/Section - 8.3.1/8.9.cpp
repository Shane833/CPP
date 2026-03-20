#include <iostream>
#include <string>
#include <sstream>

std::istream &print(std::istream &is){
    std::string line;    
    std::string s;
    while(getline(is, line)){ // Specifically checking when the stream hits eof
        std::istringstream stream(line);
        while(stream >> s){
            std::cout << s << std::endl;
        }
    }
    std::cout << "END OF FILE" << std::endl; 
    // When end of file is hit, reset the state
    is.clear();

    return is;
}

int main(){
    print(std::cin);
}
