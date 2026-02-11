#include <iostream>
#include <string>
#include <print>

// This function returns the index of the first occurence of c in s
// the reference parameter occurs counts how often c occurs
std::string::size_type find_char(const std::string &s, char c, std::string::size_type &occurs){
    auto ret = s.size(); // position of the first occurnece if any
    occurs = 0; // set the occurence count parameter
    
    for(decltype(ret) i = 0;i != s.size();++i){
        if(s[i] == c){
            if(ret == s.size()){
                ret = i; // remember the first occurence of c
            }
            ++occurs; // increment the occurence count
            // since occurs is a reference so it will update the value directly
        }
        
    }
    return ret;
}

int main(){
    std::string msg = "Hey there!";
    decltype(msg.size()) count = 0;
    char c = 'e';

    auto index = find_char(msg, c, count);

    std::println("The first occurence of {} at : {} and total count: {}", c, index, count); 
}