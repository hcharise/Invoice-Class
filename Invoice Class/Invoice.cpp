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

INVOICE.CPP (for company)

*/

#include <string> // Needed for string variables part number, part description
#include "Invoice.h" // User created header file containing the interface of class "Invoice"

using std::string;

// CONSTRUCTOR
// Builds object of class Invoice with 4 data members initialized
Invoice::Invoice(string partNum, string partDesc, int itemQuant, int itemPrice)
: partNumber{partNum}, partDescription{partDesc}, itemQuantity{itemQuant}, pricePerItem{itemPrice} {
	// Validate itemQuantity to be positive; if negative, set to 0
	if (itemQuantity < 0) {
		itemQuantity = 0;
	}
} // end Invoice constructor


// SETTERS
// Takes in new value for part number and updates object's data member
void Invoice::setPartNumber(string partNum) {
	partNumber = partNum;
} // end setPartNumber

// Takes in new value for part desciption and updates object's data member
void Invoice::setPartDescription(string partDesc) {
	partDescription = partDesc;
} // end setPartDescription

// Takes in new value for item quantity and updates object's data member
void Invoice::setItemQuantity(int itemQuant) {
	itemQuantity = itemQuant;
} // end setItemQuantity

// Takes in new value for price per item and updates object's data member
void Invoice::setPricePerItem(int itemPrice) {
	pricePerItem = itemPrice;
} // end setPricePerItem

// GETTERS
// Returns object's current part number, unmodified
string Invoice::getPartNumber() const {
	return partNumber;
} // end getPartNumber

// Returns object's current part description, unmodified
string Invoice::getPartDescription() const {
	return partDescription;
} // end getPartDescription

// Returns object's current item quantity, unmodified
int Invoice::getItemQuantity() const {
	return itemQuantity;
} // end getItemQuantity

// Returns object's current price per item, unmodified
int Invoice::getPricePerItem() const {
	return pricePerItem;
} // end getPricePerItem

// Calculate total cost for invoice and returns
int Invoice::getInvoiceAmount() {
	invoiceAmount = itemQuantity * pricePerItem;
	return invoiceAmount;
} // end getInvoiceAmount