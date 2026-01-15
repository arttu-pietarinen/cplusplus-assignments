#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace

int main() { // Main function where the program execution begins

    int U, P, A, I; // U = Jännite, P = Teho, A = Virta, I = Laskettu virta
    cout << "Anna jännite (U): "; // Prompt for voltage
    cin >> U; // Read voltage
    cout << "Anna teho (P): "; // Prompt for power
    cin >> P; // Read power
    cout << "Anna sulakkeen koko (A): "; // Prompt for fuse size
    cin >> A; // Read fuse size

    I = P / U; // Calculate current using the formula I = P / U

    if (I <= A) { // Check if the calculated current is less than or equal to the fuse size
        cout << "Sähkölaitteen voi kytkeä pistorasiaan." << endl; // If true, print that the electrical device can be connected to the socket
    } 
    else { // If the condition is false
        cout << "Sähkölaitetta ei voi kytkeä pistorasiaan." << endl; // Print that the electrical device cannot be connected to the socket
    }

    return 0; // Return 0 to indicate successful completion of the program
}