#include <iostream>
using namespace std;

int main() { // Main function
    int n; // Declare an integer n
    cout << "Anna luku: "; // Prompt the user for input
    cin >> n; // Read an integer from user input

    int i = 2; // Start from the first even number
    cout << "Luvut ovat: "; // Print the message before the numbers

    do { 
        if (i % 2 == 0) { // Check if i is even
            cout << i; // Print the current value of i
            cout << " "; // Print a space
        }
        i++; // Increment i
    } while (i <= n); // Continue until i exceeds n

    cout << endl; // Print a newline at the end
    return 0; // Indicate that the program ended successfully
}