//Arttu Pietarinen
//Week 37 / Assignment 1

#include <iostream> // Include the iostream library
using namespace std; // Use the namespace

int main() { // Main function

    float x, y; // Variables for triangle base and height
    cout << "Anna kolmion kanta: "; // Prompt user for triangle base
    cin >> x; // Read user input for triangle base
    cout << "Anna kolmion korkeus: "; // Prompt user for triangle height
    cin >> y; // Read user input for triangle height
    cout << "Kolmion ala on: " << (x * y) / 2; // Print the area of the triangle

    return 0; // Returns 0 to main function to indicate successful execution
}