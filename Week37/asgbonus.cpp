// Arttu Pietarinen
// Week 37 / Assignment bonus

#include <iostream> // Include the iostream library
#include <cmath> // Include the cmath library
using namespace std; // Use the namespace

int main() {

    float sum, interest, years, after; // Variables for sum and interest rate
    
    

    cout << "Syötä rahasumma (euroa): "; // Prompt user for sum
    cin >> sum; // Read user input for sum
    cout << "Syötä korkoprosentti: "; // Prompt user for interest rate
    cin >> interest; // Read user input for interest rate
    cout << "Kuinka monta vuotta sijoitat: "; // Prompt user for number of years
    cin >> years; // Read user input for number of years

    after = sum * pow((1 + interest / 100), years); // Calculate the value of the investment after the given years

    cout << "Sijoituksen arvo: " << after << endl; // Print the value of the investment
    cout << "Koron määrä: " << after - sum; // Print the amount of interest

    return 0; // Returns 0 to main function to indicate successful execution
}