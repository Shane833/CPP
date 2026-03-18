#include <iostream>
#include <vector>
#include <string>

int main(){
    //std::vector<int> ivec = 10; // Vector does not allow direct initialization to use single 'int' as the size parameter
    // REAL ANSWER: converting int -> vector is not a valid implicit conversion
    // Implicit conversions should be safe, obvious and unsurprising
    std::vector<int> ivec2 = {10}; // but using initializer list is valid
}
