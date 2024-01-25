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

#include <string>

using std::string;


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

private:
	string partNumber;
	string partDescription;
	int itemQuantity;
	int pricePerItem;
}; // end class Invoice

// MAIN
int main() {
	Invoice drawerPullInvoice{ "P123", "Drawer Pull, Black", 12, 3 };

} // end main