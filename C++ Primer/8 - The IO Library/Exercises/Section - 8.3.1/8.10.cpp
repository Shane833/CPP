#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

void readLines(const std::string &filepath){
    std::vector<std::string> lines;
    std::string line;

    std::ifstream file(filepath);

    if(file){
        while(getline(file, line)){
            lines.push_back(line);
        }
    }

    for(auto line : lines){
        std::istringstream str(line);
        std::string s;
        while(str >> s){
            std::cout << s << std::endl;
        }
        
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]){
    if (argc > 1){
       for(char* *s = argv + 1; s != argv + argc; s++){
           std::cout << "File : " << *s << std::endl;
           readLines(*s);
       }
    }
}
