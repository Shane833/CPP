#include "Sales_Data.hpp"

int main(){
    Sales_data total; // variable to hold the running sum
    if (read(std::cin, total)){ // read the first transaction
        Sales_data trans; // variable to hold data for next trans
        while(read(std::cin, trans)){ // read the remaining transaction
           if(total.isbn() == trans.isbn()){ // check the isbns
                total.combine(trans); // update the running total
           }else{
                print(std::cout, total) << std::endl; // print the results
                total = trans; // process the next book
           } 
        }
        print(std::cout, total) << std::endl; // print the last transaction
    }else{ // if no input
        std::cerr << "No Data?!" << std::endl; // notify the user
    }
}
