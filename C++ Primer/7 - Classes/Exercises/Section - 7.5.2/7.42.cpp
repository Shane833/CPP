#include "Sales_data.hpp"

int main(){
    Sales_data s1("C++", 2, 10); // non-delegating constructor
    Sales_data s2; // default constructor delegates from the non-delegating constructor
    Sales_data s3(std::cin); // Another delegating constructor that use
}
