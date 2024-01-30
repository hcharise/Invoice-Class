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

INVOICE.H (for customer)

*/

#include <string> // Needed for string variables part number, part description

using std::string;

// Class Invoice organizes details for a customer's invoice
class Invoice {
public:
	// CONSTRUCTOR
	// Creates an invoice object with initial part number, description, quantity, and price
	Invoice(string partNum, string partDesc, int itemQuant, int itemPrice);

	// SETTERS
	// Updates object with new part number
	void setPartNumber(string partNum);

	// Updates object with new part description
	void setPartDescription(string partDesc);

	// Updates object with new item quantity
	void setItemQuantity(int itemQuant);

	// Updates object with new price per item
	void setPricePerItem(int itemPrice);

	// GETTERS
	// Returns object's current part number
	string getPartNumber() const;

	// Returns object's current part description
	string getPartDescription() const;

	// Returns object's current item quantity
	int getItemQuantity() const;

	// Returns object's current price per item
	int getPricePerItem() const;

	// Calculates and returns the total cost for invoice (price per item * item quantity)
	int getInvoiceAmount();

private:
	string partNumber; // Stores the Invoice object's part number, initialized in constructor
	string partDescription; // Stores the Invoice object's part description, initialized in constructor
	int itemQuantity; // Stores the Invoice object's item quantity, initialized in constructor
	int pricePerItem; // Stores the Invoice object's price per item, initialized in constructor
	int invoiceAmount = 0; // Stores the Invoice object's total invoice cost, initialized to 0
}; // end class Invoice