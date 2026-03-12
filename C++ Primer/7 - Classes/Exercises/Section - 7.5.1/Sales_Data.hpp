#include <iostream>
#include <string>       

class Sales_data{
    // We have to declare the non-member friend interfaces within the class
    // Friend functions are not member of the class but they can access the
    // private member of the class
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend std::ostream &print(std::ostream &, const Sales_data &);
    friend std::istream &read(std::istream &, Sales_data &);
public:
    // defines the default constructor as well as one that takes a string argument
    Sales_data(std::string s = ""): bookNo(s) {}
    // remaining constructors
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n*p){}
    Sales_data(std::istream &is = std::cin) {read(is, *this);}
    
    // new member operations on Sales_data
    std::string isbn() const { return bookNo;}
    Sales_data& combine(const Sales_data&);
    inline double avg_price() const;
private:
    // data members
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// non-member Sales_data interface functions
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);


