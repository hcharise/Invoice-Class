# Invoice Class
This C++ program models utilizes object-oriented programming to create a hardware store's invoice application.
Created by Hannah Ashton in January 2024 using Visual Studio.

## Overall Structure
The program is broken into a three-tiered model (main, cpp, h files) to separate the test program from the class interface and its implementation. The main.cpp file prompts the user for the invoice details (part number, quantity, cost, etc) and passes this information into an object of the Invoice class. Main then prints the invoice's information for the user, including calculating the overall cost.

The interface of the Invoice class is outlined in the header file for distribution to the program's customer. The implementation of the Invoice class is kept hidden from the customer in the Invoice.cpp file.

## Invoice Class
The Invoice class organizes the data members and member functions needed to generate the invoice for the customer. This includes a private data member for each of the invoices details entered by the user (part number, quantity, cost, etc), which are all initialized in the constructor.

Each data member has a getter and setter function for retrieval and updates. There is also a getInvoiceAmount() function that calculates the total invoice amount (part quantity * part cost) to be printed at the bottom of the invoice.
