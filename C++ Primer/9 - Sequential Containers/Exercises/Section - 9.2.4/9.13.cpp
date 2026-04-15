#include <iostream>
#include <vector>
#include <list>

void displayVec(std::vector<float> &vec){\
    for(auto f : vec){
        std::cout << f << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::list<int> l = {1, 2, 3, 4, 5};
    std::vector<int> v = {6, 7, 8, 9, 10};
    
    // Creating vector<float> from list<int> and vector<int>
    std::vector<float> vf1(l.begin(), l.end());
    std::vector<float> vf2(v.begin(), v.end());
    // std::vector<float> vf3(v); This is not possible bcz the container type
                                 // and the element types must be same

    displayVec(vf1);
    displayVec(vf2);

    return 0;
}
