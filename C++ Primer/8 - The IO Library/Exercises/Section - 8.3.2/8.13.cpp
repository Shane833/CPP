#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

struct PersonInfo{ // no need to use in-class initializer bcz they are default initialized
    std::string name;
    std::vector<std::string> phones;
};

int main(int argc, char* argv[]){

    if(argc == 2){
        std::ifstream file(argv[1]);
        if(file){
            std::string line, word;
            std::vector<PersonInfo> people;
            std::istringstream record;

            while(getline(file, line)){
                PersonInfo info;
                record.str(line); // explicitely set the string to work on 
                record.clear(); // need to explicitely change the state of the stream to process new content

                record >> info.name; 

                while(record >> word){
                    info.phones.push_back(word);
                }
                people.push_back(info);
            }

            for(auto person : people){
                std::cout << person.name << std::endl;
                for(auto number : person.phones){
                    std::cout << number << std::endl;
                }
            }
        }
    }
}
