#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	Sales_data data;
	std::string current_book;
	double price = 0;
	
	// first we ask for the ISBN no and set the current book no
	std::cin >> data.bookNo >> price;
	current_book = data.bookNo;
	data.units_sold = 1;
	data.revenue = price * data.units_sold;

	while(std::cin >> data.bookNo >> price){
		// Now to check if the ISBN no. has chaged
		if(current_book != data.bookNo){
			std::cout << current_book << " " << data.units_sold << " " << data.revenue << std::endl;
			current_book = data.bookNo; // update the current book value
			data.units_sold = 0; // update the no. of units sold
			data.revenue = 0; // update the revenue
		}
		// If the ISBN no. is same
		data.units_sold++;
		data.revenue += price;
	}
	
	// We print the data about the last file at the end
	std::cout << current_book << " " << data.units_sold << " " << data.revenue << std::endl;

	return 0;
}