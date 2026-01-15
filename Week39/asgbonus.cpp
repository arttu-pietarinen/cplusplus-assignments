#include <iostream> // Include the iostream library for input and output
using namespace std; 

int main() {
    char choice; // Variable for repeating the program
    do {
        float length; // Jump length
        float scores[5]; // Array for 5 judges' style points

        // Ask for jump length
        cout << "Anna hypyn pituus, metriä: ";
        cin >> length;

        // Ask for style points from 5 judges
        for (int i = 0; i < 5; i++) {
            cout << "Anna " << i + 1 << ". tuomarin tyylipisteet: ";
            cin >> scores[i];
        }

        // Find smallest and largest style points
        float minScore = scores[0];
        float maxScore = scores[0];
        float sum = 0;

        for (int i = 0; i < 5; i++) {
            if (scores[i] < minScore) {
                minScore = scores[i];
            }
            if (scores[i] > maxScore) {
                maxScore = scores[i];
            }
            sum += scores[i]; // Sum of all scores
        }

        // Remove highest and lowest score
        float stylePoints = sum - minScore - maxScore;

        // Calculate total score
        float total = stylePoints + 0.9 * length;

        // Output result
        cout << "Hypyn kokonaispisteet: " << total << endl;

        // Ask if the user wants to repeat
        cout << "Uudelleen (k/e)? ";
        cin >> choice;

    } while (choice == 'k'); // Repeat if user answers 'k'

    return 0; // End of program
}