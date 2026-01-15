#include <iostream>
using namespace std;

int main() { // Main function
    int n; // Declare an integer n
    cout << "Anna numero: "; // Prompt the user for input
    cin >> n; // Read an integer from user input
    cout << "Luvut ovat: "; // Print the message before the numbers
    for (int i = n; i >= -n; i--) { // Loop from n down to -n
        cout << i; // Print the current value of i
        if (i != -n) cout << " "; // Print a space unless it's the last number
    }
    cout << endl;  // Print a newline at the end

    return 0; // Indicate that the program ended successfully
}