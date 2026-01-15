//Arttu Pietarinen
//Viikon 47 tehtävät

#include <iostream>
using namespace std;

void asg1();
void asg2();
void asg3();

int main()
{

    int choice; // Variable to hold user choice

    do
    {
        cout << endl;
        cout << "Week 46 assignments" << endl;
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

void asg1()
{
	cout << "Tama on tehtava 1." << endl;
	cout << "Tama ohjelma tulostaa jokaisen miljoonan aina INT_MAX arvoon asti." << endl;



	

	
}

void asg2()
{
	cout << "Tama on tehtava 2." << endl;
}

void asg3()
{
	cout << "Tama on tehtava 3." << endl;
}
