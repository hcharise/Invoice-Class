/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #1 - Exercise 3.10 p100
1/30/2024
This program creates invoices for a hardware store. It takes in the user's input for the
part number, part description, item quantity, and price per item and uses a class called
Invoice to store this data. The program then prints the information from the customer
onto an invoice, with the total invoice cost for that item calculated at the bottom.

MAIN.CPP

*/

#include <iostream>
#include <string>
#include "Invoice.h"

using std::string;
using std::cin;
using std::cout;
using std::getline;

// MAIN
int main() {
	// VARIABLES
	string itemNum;
	string itemDesc;
	int itemQuant;
	int itemPrice;

	// Print intro banner
	cout << "**********************************************************\n"
		<< "                    Hannah's Hardware                     \n"
		<< "                      Invoice System                      \n"
		<< "**********************************************************\n\n";

	cout << "For this purchase, enter the desired...\n"
		<< "   - item number: ";
	getline(cin, itemNum);
	cout << "   - item description: ";
	getline(cin, itemDesc);
	cout << "   - item quantity: ";
	cin >> itemQuant;
	cout << "   - item price: $";
	cin >> itemPrice;


	// Create invoice class
	// Can/should this be done before user's input so that input can go directly into object??
	Invoice customerInvoice{ itemNum, itemDesc, itemQuant, itemPrice };


	// Print invoice for customer
	cout << "\n---------- INVOICE -----------\n"
		<< "Part Number: " << customerInvoice.getPartNumber() << "\n"
		<< "Part Description: " << customerInvoice.getPartDescription() << "\n"
		<< "Item Quantity: " << customerInvoice.getItemQuantity() << "\n"
		<< "Price Per Item: $" << customerInvoice.getPricePerItem() << "\n\n"
		<< "Total Invoice Cost = $" << customerInvoice.getInvoiceAmount() << "\n"
		<< "--------- Thank you! ---------\n";
} // end main