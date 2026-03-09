#include "Sales_data.hpp"

int main(){
    // variable to hold the running sum
    std::cout << "Provide the first book data : ";
    Sales_data total(std::cin);

    // Take the data
    std::cout << "Enter book_name units price : ";
    Sales_data trans(std::cin);

    do{
        // Sales_data trans(std::cin); can't define inside do to be used in while
        // read the reamaining transactions
        if(total.isbn() == trans.isbn()){
            // check the isbn
            total.combine(trans); // update the running total
        }else{
            print(std::cout, total) << std::endl;
            total = trans;
        }

        std::cout << "Enter book_name units price : ";

    }while(read(std::cin, trans));

    // Print the last transaction
    print(std::cout , total) << std::endl;
    /*
       Sales_data total;
    if (read(std::cin, total)){ // We can do so bcz now total will be defined in the scope of the if
        Sales_data trans;
        // variable to hold data for the next transaction
        while(read(std::cin, trans)) {
            // read the remaining transactions
            if (total.isbn() == trans.isbn())
            // check the isbns
                total.combine(trans); // update the running total
            else {
                print(std::cout, total) << std::endl; // print the results
                total = trans;
            // process the next book
                }
        }
    print(std::cout, total) << std::endl;
    // print the last transaction
    } else {
        // there was no input
        std::cerr << "No data?!" << std::endl;
        // notify the user
    }
    */

}
