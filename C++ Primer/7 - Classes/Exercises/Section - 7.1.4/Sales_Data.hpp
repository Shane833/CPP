#include <iostream>
#include <string>       

struct Sales_data{
    // Constructors
    Sales_data():bookNo(""), units_sold(0), revenue(0.0f){} // explicitely defining a default constructor
    Sales_data(const std::string &s):bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n*p){}
    Sales_data(std::istream &is){ 
        is >> bookNo >> units_sold >> revenue; // Answer to 7.12
    }
    // new member operations on Sales_data
    std::string isbn() const { return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    // data members
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// non-member Sales_data interface functions
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);


