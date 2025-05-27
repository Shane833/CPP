#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	// We declare two Sales_data objects/variables
	Sales_data data1, data2;

	// Code for reading data into data1 and data2 objects
	double price = 0; // price per book used to calculate total revenue
	// Read the first transaction: ISBN, no. of books sold and price per book
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	// then calculate total revenue from price and units sold
	data1.revenue = price * data1.units_sold;

	// repeat for data2
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = price * data2.units_sold;

	// Code to check whether data1 and data2 have the same ISBN
	// and if yes then print their sum
	if(data1.bookNo == data2.bookNo){
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		// print: ISBN, total sold, total revenue and average price per book
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << std::endl;

		if(totalCnt != 0){
			std::cout << (totalRevenue/totalCnt) << std::endl;
		}else{
			std::cout << "(no sales" << std::endl;
		}
		return 0; // indicates success
	}else{ // transactions weren't for the same ISBN
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1; // indicates failure
	}

	return 0;
}