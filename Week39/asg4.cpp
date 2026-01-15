#include <iostream>
using namespace std;

int main() { // Main function
    int n; // Declare an integer n
    cout << "Anna luku: "; // Prompt the user for input
    cin >> n; // Read an integer from user input

    cout << "Luvut ovat: "; // Print the message before the numbers

    for (int i = 2; i <= n; i++) { // Start from 2 and continue until n
        if (i % 2 == 0) { // Check if i is even
            cout << i << " "; // Print the current value of i and a space
        }
    }

    cout << endl; // Print a newline at the end
    return 0; // Indicate that the program ended successfully
}