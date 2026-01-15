#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace

int main() { // Main function where the program execution begins

    int limit = 300; // Elevator weight limit in kg
    int weight1, weight2, weight3, weight4; // Variables to store the weights of four individuals

    cout << "Anna ensimmäisen henkilön paino (kg): "; // Prompt for the first person's weight
    cin >> weight1; // Read the first person's weight
    cout << "Anna toisen henkilön paino: "; // Prompt for the second person's weight
    cin >> weight2; // Read the second person's weight
    cout << "Anna kolmannen henkilön paino: "; // Prompt for the third person's weight
    cin >> weight3; // Read the third person's weight
    cout << "Anna neljännen henkilön paino: "; // Prompt for the fourth person's weight
    cin >> weight4; // Read the fourth person's weight

    int totalWeight = weight1 + weight2 + weight3 + weight4; // Calculate the total weight

    if (totalWeight <= limit) { // Check if the total weight is within the elevator's limit
        cout << "Hissi kestää kuorman." << endl; // If true, print that the elevator can handle the load
    } 
    else { // If the condition is false
        cout << "Hissi ei kestä kuormaa." << endl; // Print that the elevator cannot handle the load
    }

    return 0; // Return 0 to indicate successful completion of the program

}