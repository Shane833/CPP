#include <vector>
#include <string>
#include <sstream>
#include <iostream>

struct PersonInfo{ // no need to use in-class initializer bcz they are default initialized
    std::string name;
    std::vector<std::string> phones;
};

int main(){
    std::string line, word;
    std::vector<PersonInfo> people;
    std::istringstream record;
    std::string s;

    while(getline(std::cin, line)){
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
