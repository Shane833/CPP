#include "Sales_Data.hpp"

// Defining the member functions outside the class
double Sales_data::avg_price() const{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}

// Returning the this object
Sales_data& Sales_data::combine(const Sales_data &rhs){
   units_sold += rhs.units_sold;
   revenue += rhs.revenue;
   return *this; // return the object on which the function was called
                 // dereferencing this gives us the underlying object
                 // that it points to
}


// Defining non-member functions
std::istream &read(std::istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is; // returns a reference to the istream
}

std::ostream &print(std::ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs; // copies data members from lhs to sum
    sum.combine(rhs);
    return sum;
}
