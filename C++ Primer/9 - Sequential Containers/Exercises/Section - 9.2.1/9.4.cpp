#include <vector>
#include <iterator>
#include <iostream>

std::vector<int>::const_iterator found(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e, int num){
    while(b != e){
        if (*b == num) return b;
        b++;
    }

    return e; // returns the end iterator if element not found
}

int main(){
    std::vector<int> ivec{1,2,3,4,5};

    auto f = found(ivec.cbegin(), ivec.cend(), 0);
    if(f == ivec.cend()){
        std::cout << "Element not found" << std::endl;
    }else{
        std::cout << "Element found" << std::endl;
    }
    
    f = found(ivec.cbegin(), ivec.cend(), 3);
    if(f == ivec.cend()){
        std::cout << "Element not found" << std::endl;
    }else{
        std::cout << "Element found" << std::endl;
    }
}

