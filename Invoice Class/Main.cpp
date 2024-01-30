/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #1 - Exercise 3.10 p100
1/30/2024
This program creates invoices for a hardware store. It takes in the user's input for the
part number, part description, item quantity, and price per item and uses a class called
Invoice to organize this data. The program then prints the information from the customer
onto an invoice, with the total invoice cost for that item calculated at the bottom.

MAIN.CPP

*/

#include <iostream> // Used to print output and receive input from user
#include <string> // Needed for string variables part number, part description
#include "Invoice.h" // User created header file containing the class "Invoice"

using std::string;
using std::cin;
using std::cout;
using std::getline;

// MAIN; test program for the class "Invoice"
// Gets item details from user, then prints item details and total cost on invoice
int main() {
	// VARIABLES
	string itemNum; // Stores the part number from the user, is passed into Invoice constructor
	string itemDesc; // Stores the part description from the user, is passed into Invoice constructor
	int itemQuant; // Stores the quantity of item from the user, is passed into Invoice constructor
	int itemPrice; // Stores the item price from the user, is passed into Invoice constructor

	// Print intro banner for Invoice System
	cout << "**********************************************************\n"
		<< "                    Hannah's Hardware                     \n"
		<< "                      Invoice System                      \n"
		<< "**********************************************************\n\n";

	// Prompts for and takes in user input for item number, description, quantity, and price
	cout << "For this purchase, enter the desired...\n"
		<< "   - part number: ";
	getline(cin, itemNum);
	cout << "   - part description: ";
	getline(cin, itemDesc);
	cout << "   - item quantity: ";
	cin >> itemQuant;
	cout << "   - item price: $";
	cin >> itemPrice;

	// Create object from Invoice class using input from user
	Invoice customerInvoice{ itemNum, itemDesc, itemQuant, itemPrice };

	// Print invoice for customer with all user-entered details and total invoice cost
	cout << "\n---------- INVOICE -----------\n"
		<< "Part Number: " << customerInvoice.getPartNumber() << "\n"
		<< "Part Description: " << customerInvoice.getPartDescription() << "\n"
		<< "Item Quantity: " << customerInvoice.getItemQuantity() << "\n"
		<< "Price Per Item: $" << customerInvoice.getPricePerItem() << "\n\n"
		<< "Total Invoice Cost = $" << customerInvoice.getInvoiceAmount() << "\n"
		<< "--------- Thank you! ---------\n";

} // end main