#include <iostream>
#include <vector>

int main(){
    std::vector<int> iv{1, 2, 3, 4, 5};

    auto iter = iv.begin(),
         mid = iv.begin() + iv.size() / 2;
    /*
    std::cout << *iter << std::endl;
    std::cout << *mid << std::endl;
    */
   
   /* Here, after insertion all the iterators, pointers and
    * references become invalid
    * Also the iterator was not
   while (iter != mid){
        if (*iter == some_val)
            iv.insert(iter, 2 * some_val);
    }
   */
    
    // Solution 1 : Recalculate the iterator after insertion
    while(iter != mid){
        if(*iter == 1){
            iter = iv.insert(iter, 2 * 1) + 1; 
            mid = iv.begin() + (iv.size() / 2) - 1; 
        } 
        iter++;
    }

    for(auto i : iv){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Solution 2 : Don't use iterators at all
}
