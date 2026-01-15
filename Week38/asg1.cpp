#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace

int main() { // Main function where the program execution begins
    
    int age; // Variable to store the user's age

    cout << "Kuinka vanha olet? "; // Prompt the user for their age
    cin >> age; // Read the user's input and store it in the age variable

    if (age >= 13 && age <= 19) { // Check if the age is between 13 and 19 inclusive
        cout << "Olet teini" << endl; // If true, print "You are a teenager"
    } 
    else  { // If the condition is false
        cout << "Et ole teini" << endl; // Print "You are not a teenager"

    }  

    return 0; // Return 0 to indicate successful completion of the program
}