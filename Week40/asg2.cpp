#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> // Include the iomanip library for setprecision
using namespace std;

int main() {

    srand(time(0)); // Seed the random number generator with the current time
    
    double random1 = rand() % 101 / 100.0; // Generate a random number between 0.00 and 1.00
    double random2 = (rand() % 51 + 50) / 100.0;  // Generate a random number between 0.50 and 1.00

    cout << fixed << setprecision(2); // Set precision for floating point output
    cout << "Satunnaisluvuksi väliltä 0-1 tuli: " << random1 << endl; // Output the first random number
    cout << "Satunnaisluvuksi väliltä 0,5-1 tuli: " << random2 << endl; // Output the second random number

    return 0;
}