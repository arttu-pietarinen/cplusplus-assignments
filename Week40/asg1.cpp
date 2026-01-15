#include <iostream> // Include the iostream library for input and output
#include <cstdlib> // Include the cstdlib library for rand() and srand()
#include <ctime> // Include the ctime library for time()
using namespace std; // Use the standard namespace

int main() { 
    
    srand(time(0)); // Seed the random number generator with the current time

    int random1 = rand() % 11; // Generate a random number between 0 and 10
    int random2 = rand() % 51+50; // Generate a random number between 50 and 100

    cout << "Satunnaisluvuksi väliltä 0-10 tuli: " << random1 << endl; // Output the first random number
    cout << "Satunnaisluvuksi väliltä 50-100 tuli: " << random2 << endl; // Output the second random number

    return 0;
}