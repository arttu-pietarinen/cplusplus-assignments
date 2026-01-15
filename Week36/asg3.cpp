#include <iostream> // Include the iostream library
using namespace std; // Use the namespace

int main () {

    int age; // Variable for age
    cout << "Enter your age: "; // Prompt user for age
    cin >> age; // Read user input for age
    cout << "In 50 years you are " << age + 50 << " years old." << endl; // Print age in 50 years
    return 0; // Returns 0 to main function to indicate successful execution
}