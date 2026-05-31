#include <iostream>

int main(){
    if(std::cin){ // This will return a bool defining the state of the stream(good or failed)
        std::cout << "Something happens" << std::endl;
    }
}
