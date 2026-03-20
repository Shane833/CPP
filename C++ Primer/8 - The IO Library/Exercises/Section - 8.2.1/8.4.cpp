#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void readLines(const std::string &filepath){
    std::vector<std::string> lines;
    std::string line;

    std::ifstream file(filepath);

    if(file){
        while(getline(file, line)){
            lines.push_back(line);
        }
    }
    std::cout << "Lines : " << std::endl;
    for(auto line : lines){
        std::cout << line << std::endl;
    }
    std::cout << std::endl;
}

void readWords(const std::string &filepath){
    std::vector<std::string> words;
    std::string word;

    std::ifstream file(filepath);

    if(file){
        while(file >> word){
            words.push_back(word);
        }
    }
    
    std::cout << "Words : " << std::endl;
    for(auto word : words){
        std::cout << word << std::endl;
    }
}

int main(int argc, char* argv[]){
    if (argc > 1){
       for(char* *s = argv + 1; s != argv + argc; s++){
           std::cout << "File : " << *s << std::endl;
           readWords(*s);
           readLines(*s);
       }
    }
}
