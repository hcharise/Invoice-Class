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

#include <string>

using std::string;

class Invoice {
public:
	// CONSTRUCTOR
	Invoice(string partNum, string partDesc, int itemQuant, int itemPrice)
		: partNumber{ partNum }, partDescription{ partDesc }, itemQuantity{ itemQuant }, pricePerItem{ itemPrice } {
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

