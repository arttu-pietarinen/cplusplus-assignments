// Arttu Pietarinen
// Week 37 / Assignment 2

#include <iostream> // Include the iostream library
using namespace std; // Use the namespace

int main() {

    float x, y; // Variables for product price and discount percentage
    cout << "Syötä alkuperäinen hinta (euroa): "; // Prompt user for original price
    cin >> x; // Read user input for original price
    cout << "Syötä alennusprosentti: "; // Prompt user for discount percentage
    cin >> y; // Read user input for discount percentage
    cout << "Alennettu hinta on:" << x - (x * y / 100); // Print the discounted price

    return 0; // Returns 0 to main function to indicate successful execution
}