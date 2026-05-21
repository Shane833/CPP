#include <vector>
#include <list>
#include <array>
#include <iostream>
#include <string> 

int main(){
    std::list<char *> str_list{"Yo", "what", "is", "going", "on?"};
    //std::array<char *, 5> str_array;// Assign is not valid for arrays
    std::vector<std::string> str_vec;

    std::cout << "Elements of list : " << std::endl;
    for(auto c : str_list){
        std::cout << c << " ";
    }
    std::cout << std::endl;

    /* Invalid Operation
    // Assigning to array of strings
    str_array.assign(str_list.cbegin(), str_list.cend());

    std::cout << "Elements of array : " << std::endl;
    for(auto c : str_array){
        std::cout << c << " "; 
    }
    std::cout << std::endl;
    */
    // Assigning to vector of strings
    str_vec.assign(str_list.cbegin(), str_list.cend());

    std::cout << "Elements of vector : " << std::endl;
    for(auto c : str_vec){
        std::cout << c << " ";
    }
    std::cout << std::endl;
}
