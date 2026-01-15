#include <iostream>
using namespace std;

int main() { // Main function

    int n; // Declare an integer variable to hold user input

    do {
        cout << "Anna luku (vähintään 1): "; // Prompt the user for input
        cin >> n; // Read an integer from user input       

    } while (n < 1); // Continue prompting while the number is at least 1

    cout << "Luvut ovat: 0"; // Start the output with "Luvut ovat: 0"

    for (int i = 1; i <= n; i++) { // Loop from 1 to n
        cout << ", " << i << ", " << -i; // Print the sequence of numbers
    };

    cout << "." << endl; // End the output with a period

    return 0; // Indicate that the program ended successfully
}