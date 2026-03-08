#include "Sales_data.hpp"

int main(){
    Sales_data first_type;
    Sales_data second_type("C++ Primer");
    Sales_data third_type("Java", 2, 10);

    std::cout << "Enter the book_name, no_of_items, price_of_item : " << std::endl;
    Sales_data fourth_type(std::cin);

    std::cout << "First_type -> book_name : " << first_type.bookNo << std::endl;
    std::cout << "Second_type -> book_name : " << second_type.bookNo << std::endl;
    std::cout << "Third_type -> book_name : " << third_type.bookNo << std::endl;
    std::cout << "Fourth_type -> book_name : " << fourth_type.bookNo << std::endl;
}
