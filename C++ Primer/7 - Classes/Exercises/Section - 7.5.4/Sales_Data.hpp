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
    
    // remaining constructors
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n*p){      
        std::cout << "Non Delegating Constructor" << std::endl;
    }
    // Using delegating constructors
    // 1. Default constructor - uses the non-delegating constructor
    Sales_data(std::string s = ""): Sales_data(s, 0, 0.0){ std::cout << "First Delegating Constructor" << std::endl;}
    // 2. Second constructor - uses the default constructor which is a delegating
    // constructor, which in turn uses the non-delegating constructor
    Sales_data(std::istream &is): Sales_data() {
        std::cout << "Second Delegating Constructor" << std::endl;
        read(is, *this);
    }
    
    // new member operations on Sales_data
    std::string isbn() const { return bookNo;}
    Sales_data& combine(const Sales_data&);
    //Sales_data& combine(const Sales_data &) const;
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


