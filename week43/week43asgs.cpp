//Arttu Pietarinen
//Week 43

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void asg1() {
	
    int luvut[10]; // Array to hold 10 integers

    for (int i = 0; i < 10; i++) { // Loop to get user input
        cout << "Anna luku: ";
        cin >> luvut[i];
    }

    cout << endl;

    // List the entered numbers
    cout << "Syötetyt luvut: " << endl;
    for (int i = 0; i < 10; i++) {
	cout << luvut[i] << " ";
    }
    cout << endl;

    // Bubble sort algorithm
    for (int i = 0; i < 10 - 1; i++) {          
	for (int j = 0; j < 10 - i - 1; j++) {  
		if (luvut[j] > luvut[j + 1]) {
                int temp = luvut[j];
                luvut[j] = luvut[j + 1];
                luvut[j + 1] = temp;
            }
        }
    }

    cout << endl;

    cout << "Luvut järjestyksessä pienimmästä suurimpaan: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << luvut[i] << " ";
    }
    cout << endl;

}

// Linear search function
int search(vector<int> &arr, int target, int &count) {

count = 0; // Initialize count of comparisons
    for (size_t i = 0; i < arr.size(); i++) {
	 count++; // Increment comparison count
	if (arr[i] == target) {
		return i; // Return index if found
	}
    }
    return -1; // Return -1 if not found

}

void asg2() {

   int count; // Variable to hold number of comparisons
	
   srand(time(0)); // Seed the random number generator

   vector <int> luvut; // Array to hold 8 integers

   for (int i = 0; i < 8; i++) {
       int randomNum = rand() % 101 + 1; // Generate random number between 1 and 100
       luvut.push_back(randomNum);       // Store random number in the array

   }

   cout << "Generoidut luvut: ";
   for (int num : luvut) cout << num << " ";
   cout << endl;

   int haettava;
   cout << "Syötä haettava luku (1-100): ";
   cin >> haettava;
   cout << endl;

   int index = search(luvut, haettava, count);
   if (index != -1) {
       cout << "Luku " << haettava << " löytyi indeksistä " << index << "." << endl;
   } else {
       cout << "Lukua " << haettava << " ei löytynyt." << endl;
   }

   cout << "Suoritettiin " << count << " vertailua." << endl;

}

void asg3() {

	srand(static_cast<unsigned int>(time(nullptr)));

    vector<int> pelaajanNumerot;
    vector<int> arvotutNumerot;

    cout << "Anna 7 uniikkia numeroa väliltä 1-40:" << endl;
    while (pelaajanNumerot.size() < 7) {
        int numero;
        cout << "Numero " << pelaajanNumerot.size() + 1 << ": ";
        cin >> numero;

        if (numero < 1 || numero > 40) {
            cout << "Virhe: Numero pitää olla väliltä 1-40." << endl;
            continue;
        }
        bool onJo = false;
        for (int n : pelaajanNumerot) {
            if (n == numero) {
                onJo = true;
                break;
            }
        }
        if (onJo) {
            cout << "Virhe: Numero on jo annettu." << endl;
            continue;
        }
        pelaajanNumerot.push_back(numero);
    }

    while (arvotutNumerot.size() < 7) {
        int numero = rand() % 40 + 1;
        bool onJo = false;
        for (int n : arvotutNumerot) {
            if (n == numero) {
                onJo = true;
                break;
            }
        }
        if (!onJo) {
            arvotutNumerot.push_back(numero);
        }
    }

    int osumat = 0;
    for (int p : pelaajanNumerot) {
        for (int a : arvotutNumerot) {
            if (p == a) {
                osumat++;
                break;
            }
        }
    }

    cout << "Pelaajan numerot: ";
    for (int n : pelaajanNumerot) {
        cout << n << " ";
    }
    cout << endl;

    cout << "Arvotut numerot: ";
    for (int n : arvotutNumerot) {
        cout << n << " ";
    }
    cout << endl;

    cout << "Osumia: " << osumat << endl;


}

int main()
{

    int choice; // Variable to hold user choice

    do
    {
        cout << endl;
        cout << "Week 43 assignments" << endl;
        cout << "Choose assignment (1, 2, 3) or 0 to exit: "; // Prompt user for choice
        cin >> choice;                                        // Read user choice
        cout << endl;

        if (choice == 1)
            asg1(); // Call assignment 1 function
        else if (choice == 2)
            asg2(); // Call assignment 2 function
        else if (choice == 3)
            asg3(); // Call assignment 3 function
        else if (choice == 0)
        {                                 // Exit the program
            cout << "Exiting..." << endl; // Notify user of exit
        }
        else
        {
            cout << "Invalid choice" << endl; // Notify user of invalid choice
        }

    } while (choice != 0); // Continue until user chooses to exit

    return 0;
}
