#include "Sales_Data.hpp"
#include <fstream>

int main(int argc, char* argv[]){
    if(argc > 1){
        std::ifstream file(argv[1]);
        if(file){
            Sales_data total; // variable to hold the running sum
            if (read(file, total)){ // read the first transaction
                Sales_data trans; // variable to hold data for next trans
                while(read(file, trans)){ // read the remaining transaction
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
    }
}
