// Arttu Pietarinen
// Week 37 / Assignment 3

#include <iostream> // Include the iostream library
using namespace std; // Use the namespace

int main() {

    int age1, age2, age3, age4; // Variables for ages of four people
    cout << "Syötä henkilön 1 ikä:  "; // Prompt user for age 1
    cin >> age1; // Read user input for age 1
    cout << "Syötä henkilön 2 ikä:  "; // Prompt user for age 2
    cin >> age2; // Read user input for age 2
    cout << "Syötä henkilön 3 ikä:  "; // Prompt user for age 3
    cin >> age3; // Read user input for age 3
    cout << "Syötä henkilön 4 ikä:  "; // Prompt user for age 4
    cin >> age4; // Read user input for age 4
    cout << "Iät yhteensä: " << age1 + age2 + age3 + age4 << endl; // Print the total age
    cout << "Iät keskiarvo: " << (age1 + age2 + age3 + age4) / 4.0; // Print the average age

    return 0; // Returns 0 to main function to indicate successful execution
}