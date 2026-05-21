#include <iostream>
#include <list>
#include <deque>

int main(){
    std::list<int> ilist{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> odd, even;

    for(int i : ilist){
        if(i % 2 == 0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }
    
    std::cout << "Odd Deque : " << std::endl;
    for(int i : odd){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "Even Deque : " << std::endl;
    for(int i : even){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
