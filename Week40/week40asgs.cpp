//Arttu Pietarinen
//25tietoB
//Viikon 40 harjoitukset

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void asg1() {
    cout << "This is assignment 1" << endl;
    
    srand(time(0)); // Seed the random number generator with the current time

    int random1 = rand() % 11; // Generate a random number between 0 and 10
    int random2 = rand() % 51+50; // Generate a random number between 50 and 100

    cout << "Satunnaisluvuksi väliltä 0-10 tuli: " << random1 << endl; // Output the first random number
    cout << "Satunnaisluvuksi väliltä 50-100 tuli: " << random2 << endl; // Output the second random number

}

void asg2() {
    cout << "This is assignment 2" << endl;
    srand(time(0)); // Seed the random number generator with the current time
    
    double random1 = rand() % 101 / 100.0; // Generate a random number between 0.00 and 1.00
    double random2 = (rand() % 51 + 50) / 100.0;  // Generate a random number between 0.50 and 1.00

    cout << fixed << setprecision(2); // Set precision for floating point output
    cout << "Satunnaisluvuksi väliltä 0-1 tuli: " << random1 << endl; // Output the first random number
    cout << "Satunnaisluvuksi väliltä 0,5-1 tuli: " << random2 << endl; // Output the second random number

}

void asg3() {
    cout << "This is assignment 3" << endl;
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
}

int main() {

    int choice; // Variable to hold user choice

    do {
        cout << "Choose assignment (1, 2, 3) or 0 to exit: "; // Prompt user for choice
        cin >> choice; // Read user choice

        if (choice == 1) asg1(); // Call assignment 1 function
        else if (choice == 2) asg2(); // Call assignment 2 function
        else if (choice == 3) asg3(); // Call assignment 3 function
        else if (choice == 0) { // Exit the program
            cout << "Exiting..." << endl; // Notify user of exit
        }
        else {
            cout << "Invalid choice" << endl; // Notify user of invalid choice
        }

    } while (choice != 0); // Continue until user chooses to exit

    return 0;
}