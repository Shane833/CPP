#include "Sales_Data.hpp"
#include <fstream>

int main(int argc, char* argv[]){
    if(argc == 3){
        std::ifstream input_file(argv[1]);
        std::ofstream output_file(argv[2], std::ofstream::app); // opening in apped mode
        if(input_file){
            Sales_data total; // variable to hold the running sum
            if (read(input_file, total)){ // read the first transaction
                Sales_data trans; // variable to hold data for next trans
                while(read(input_file, trans)){ // read the remaining transaction
                   if(total.isbn() == trans.isbn()){ // check the isbns
                        total.combine(trans); // update the running total
                   }else{
                        print(output_file, total) << std::endl; // print the results
                        total = trans; // process the next book
                   } 
                }
                print(output_file, total) << std::endl; // print the last transaction
            }else{ // if no input
                std::cerr << "No Data?!" << std::endl; // notify the user
            }
        }
    }
}
