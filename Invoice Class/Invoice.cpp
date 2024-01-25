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

INVOICE.CPP (for company)

*/

#include <string>
#include "Invoice.h"

using std::string;

// CONSTRUCTOR
Invoice::Invoice(string partNum, string partDesc, int itemQuant, int itemPrice)
: partNumber{partNum}, partDescription{partDesc}, itemQuantity{itemQuant}, pricePerItem{itemPrice} {
	// Validate itemQuantity to be positive; if negative, set to 0
	if (itemQuantity < 0) {
		itemQuantity = 0;
	}
} // end Invoice constructor


// SETTERS
void Invoice::setPartNumber(string partNum) {
	partNumber = partNum;
} // end setPartNumber

void Invoice::setPartDescription(string partDesc) {
	partDescription = partDesc;
} // end setPartDescription

void Invoice::setItemQuantity(int itemQuant) {
	itemQuantity = itemQuant;
} // end setItemQuantity

void Invoice::setPricePerItem(int itemPrice) {
	pricePerItem = itemPrice;
} // end setPricePerItem

// GETTERS
string Invoice::getPartNumber() const {
	return partNumber;
} // end getPartNumber

string Invoice::getPartDescription() const {
	return partDescription;
} // end getPartDescription

int Invoice::getItemQuantity() const {
	return itemQuantity;
} // end getItemQuantity

int Invoice::getPricePerItem() const {
	return pricePerItem;
} // end getPricePerItem

// Calculate total cost for invoice
int Invoice::getInvoiceAmount() {
	invoiceAmount = itemQuantity * pricePerItem;
	return invoiceAmount;
}
