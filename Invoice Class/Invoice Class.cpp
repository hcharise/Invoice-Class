/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #1 - Exercise 3.10 p100
1/30/2024
This program does so on and so forth...


3.10: Create a class called Invoice that a hardware store might use to represent
an invoice for an item sold at the store. An Invoice should include four data members:
 - a part number (string)
 - a part description (string)
 - a quantity of the item being purchased (int)
 - a price per item (int)
Your class should have a constructor that initializes the four data members.
Provide a set and a get function for each data member.
In addition, provide a member function named getInvoiceAmount that calculates the invoice
amount (ie, multiples the quantity by the price per item), then returns the amount as
an int value. If the quantitiy is not positive, it should be set to 0.
Write a test program that demonstrates class Invoice's capabilities.
*/

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class Invoice {
public:
	// CONSTRUCTOR
	
	Invoice(string partNum, string partDesc, int itemQuant, int itemPrice)
	: partNumber{partNum}, partDescription{partDesc}, itemQuantity{itemQuant}, pricePerItem{itemPrice} {
		// empty body
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
	cout << "*****************************\n"
		 << "      Hannah's Hardware      \n"
		 << "       Invoice System       \n"
		 << "*****************************\n\n";

	/* DELETING?
	// Print menu
	cout << "ITEMS AVAILABLE:\n"
		 << "Part Number     Part Description     Price Per Item\n"
		 << "A100            2\" Nails, 20 ct      $2\n"
		 << "A101            3\" Nails, 20 ct      $2\n\n";
	*/

	cout << "Enter item number for this purchase: ";
	cin >> itemNum;
	cout << "Enter the desription of this item: ";
	cin >> itemDesc;
	cout << "Enter the quantity of item " << itemNum << " that is being purchased: ";
	// Not taking input here?
	cin >> itemQuant;
	cout << "Enter the price per item: ";
	cin >> itemPrice;


	// Create invoice class
	Invoice drawerPullInvoice{ "P123", "Drawer Pull, Black", 12, 3 };


} // end main