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

*/

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

class Invoice {
public:
	// CONSTRUCTOR
	
	Invoice(string partNum, string partDesc, int itemQuant, int itemPrice)
	: partNumber{partNum}, partDescription{partDesc}, itemQuantity{itemQuant}, pricePerItem{itemPrice} {
		// Validate itemQuantity to be positive; if negative, set to 0
		if (itemQuantity < 0) {
			itemQuantity = 0;
		}
	} // end Invoice constructor


	// SETTERS
	string setPartNumber(string partNum) {
		partNumber = partNum;
	} // end setPartNumber

	string setPartDescription(string partDesc) {
		partDescription = partDesc;
	} // end setPartDescription

	int setItemQuantity(int itemQuant) {
		itemQuantity = itemQuant;
	} // end setItemQuantity

	int setPricePerItem(int itemPrice) {
		pricePerItem = itemPrice;
	} // end setPricePerItem

	// GETTERS
	string getPartNumber() const {
		return partNumber;
	} // end getPartNumber

	string getPartDescription() const {
		return partDescription;
	} // end getPartDescription

	int getItemQuantity() const {
		return itemQuantity;
	} // end getItemQuantity

	int getPricePerItem() const {
		return pricePerItem;
	} // end getPricePerItem

	// Calculate total cost for invoice
	int getInvoiceAmount() {
		invoiceAmount = itemQuantity * pricePerItem;
		return invoiceAmount;
	}

private:
	string partNumber;
	string partDescription;
	int itemQuantity;
	int pricePerItem;
	int invoiceAmount = 0; // IS THIS OKAY??
}; // end class Invoice

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
	Invoice customerInvoice{itemNum, itemDesc, itemQuant, itemPrice};


	// Print invoice for customer
	cout << "\n---------- INVOICE -----------\n"
		 << "Part Number: " << customerInvoice.getPartNumber() << "\n"
		 << "Part Description: " << customerInvoice.getPartDescription() << "\n"
		 << "Item Quantity: " << customerInvoice.getItemQuantity() << "\n"
		 << "Price Per Item: $" << customerInvoice.getPricePerItem() << "\n\n"
		 << "Total Invoice Cost = $" << customerInvoice.getInvoiceAmount() << "\n"
		<< "--------- Thank you! ---------\n";
} // end main