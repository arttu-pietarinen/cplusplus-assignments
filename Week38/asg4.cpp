#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace

int main() { // Main function where the program execution begins

    int start; // Variable to store the start time of the work shift

    cout << "Mihin kellonaikaan työvurosi alkaa: "; // Prompt for the start time of the work shift
    cin >> start; // Read the start time

    switch (start) { // Switch statement to determine the work shift based on the start time
        case 6: // If the start time is 6
            cout << "Sinulla on aamuvuoro." << endl; // Print that the user has a morning shift
            break; // Break to exit the switch statement
        
        case 14: // If the start time is 14
            cout << "Sinulla on iltavuoro." << endl; // Print that the user has an evening shift
            break; // Break to exit the switch statement

        case 22: // If the start time is 22
            cout << "Sinulla on yövuoro." << endl; // Print that the user has a night shift
            break; // Break to exit the switch statement

        default: // If the start time does not match any of the cases
            cout << "Virhetilanne" << endl; // Print an error message
            break; // Break to exit the switch statement
    }
 

    return 0; // Return 0 to indicate successful completion of the program
}