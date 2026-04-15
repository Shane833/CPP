#include <vector>
#include <iostream>

void displayVec(std::vector<int> &ivec){
    for(auto i : ivec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> ivec; // Empty Vector
    std::vector<int> ivec2(10); // Vector of 10 default initialized ints
    std::vector<int> ivec3(10, 5); // Vector of 10 ints, all initialized to 5
    std::vector<int> ivec4 = {1, 2, 3, 4, 5}; // List initialized vector
    std::vector<int> ivec5(ivec3); // Copy initialization of a vector
    std::vector<int> ivec6(ivec4.begin(), ivec4.end()); // Ranged copy initialization
    std::vector<int> ivec7{6, 7, 8, 9, 10};
    std::vector<int> ivec8 = ivec7;

    displayVec(ivec);
    displayVec(ivec2);
    displayVec(ivec3);
    displayVec(ivec4);
    displayVec(ivec5);
    displayVec(ivec6);
    displayVec(ivec7);
    displayVec(ivec8);

    return 0;
}
