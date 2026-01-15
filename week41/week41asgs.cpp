// Arttu Pietarinen
// 25tietoB
// Viikon 41 harjoitukset

#include <iostream>
#include <ctime>
using namespace std;

void asg1()
{

    cout << "This is assignment 1" << endl;
    cout << endl;

    // Make an array to hold 10 integers
    int luvut[11];
    int total = 0;

    // Input 10 numbers from the user
    cout << "Anna 10 lukua:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Anna luku: ";
        cin >> luvut[i];
        total += luvut[i];
    }

    // Output the numbers entered by the user
    cout << "Luvut olivat: ";
    for (int i = 0; i < 10; i++)
    {
        cout << luvut[i] << ", ";
    }

    cout << "Lukujen keskiarvo on: " << total / 10.0 << endl;
}

void asg2()
{

    cout << "This is assignment 2" << endl;
    cout << endl;

    int luvut[10];
    int frequency[21] = {0};

    cout << "Anna 10 lukua (1-20):" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Anna luku: ";
        cin >> luvut[i];
        frequency[luvut[i]]++;
    }

    cout << endl
         << "Histogrammi:" << endl;

    for (int i = 1; i <= 20; i++)
    {

        if (frequency[i] > 0)
        {
            cout << "Arvo " << i << ": ";
            for (int j = 0; j < frequency[i]; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}

void asg3()
{

    cout << "This is assignment 3" << endl;
    cout << endl;

    srand(time(0));

    const int heitot = 6000;
    int frequency[7] = {0};

    for (int i = 0; i < heitot; i++)
    {
        int silmaluku = rand() % 6 + 1;
        frequency[silmaluku]++;
    }


    cout << "Noppaa heitetty 6000 kertaa" << endl << "Silmälukujen esiintymismäärät: " << endl;

    for (int i = 1; i <= 6; i++)
    {
        cout << i << ": " << frequency[i] << " kertaa";
        cout << endl;
    }
}

int main()
{

    int choice; // Variable to hold user choice

    do
    {
        cout << endl;
        cout << "Week 41 assignments" << endl;
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