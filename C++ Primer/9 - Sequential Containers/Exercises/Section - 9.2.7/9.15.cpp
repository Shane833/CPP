#include <vector>
#include <iostream>

int main(){
    std::vector<int> ivec1{1, 2, 3, 4};
    std::vector<int> ivec2{1, 2, 3, 4};
    std::vector<int> ivec3{1, 2, 3};

    if(ivec1 == ivec2){
        std::cout << "ivec1 = ivec2" << std::endl;
    }else{
        std::cout << "ivec1 != ivec2" << std::endl;
    }

    if(ivec1 == ivec3){
        std::cout << "ivec1 = ivec3" << std::endl;
    }else{
        std::cout << "ivec1 != ivec3" << std::endl;
    }

    return 0;

}
