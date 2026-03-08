#include "Sales_data.hpp"

int main(){
    Sales_data generic; // basic version explicitely defined

    std::cout << "Book : " << generic.bookNo << " units : " << generic.units_sold << " revenue : "<< generic.revenue << std::endl;
}
