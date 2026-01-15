#include <iostream>
using namespace std;

int main() {
    int n; // Declare an integer n
    cout << "Anna numero: "; 
    cin >> n; // Read an integer from user input

    int i = n; // Initialize i to n
    cout << "Luvut ovat: "; 
    do {
        cout << i; // Print the current value of i
        if (i != -n) cout << " "; // Print a space unless it's the last number
        i--; // Decrement i
    } while (i >= -n); // Continue until i is -n

    cout << endl;  // Print a newline at the end
    
    return 0; // Indicate that the program ended successfully
}