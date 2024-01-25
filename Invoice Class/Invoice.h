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

INVOICE.H (for customer)

*/ 

#include <string>

using std::string;

class Invoice {
public:
	// CONSTRUCTOR
	Invoice(string partNum, string partDesc, int itemQuant, int itemPrice);

	// SETTERS
	void setPartNumber(string partNum);
	void setPartDescription(string partDesc);
	void setItemQuantity(int itemQuant);
	void setPricePerItem(int itemPrice);

	// GETTERS
	string getPartNumber() const;
	string getPartDescription() const;
	int getItemQuantity() const;
	int getPricePerItem() const;

	// Calculate total cost for invoice
	int getInvoiceAmount();

private:
	string partNumber;
	string partDescription;
	int itemQuantity;
	int pricePerItem;
	int invoiceAmount = 0; // IS THIS OKAY??
}; // end class Invoice

