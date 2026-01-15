// Arttu Pietarinen
// 25tietoB
// Viikon 46 harjoitukset
// Kaikki tehty kaikilla lisapisteilla

#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

void asg1();
void asg2();

int main()
{

    int choice; // Variable to hold user choice

    do
    {
        cout << endl;
        cout << "Week 46 assignments" << endl;
        cout << "Choose assignment (1, 2) or 0 to exit: "; // Prompt user for choice
        cin >> choice;                                        // Read user choice
	cout << endl;

        if (choice == 1)
            asg1(); // Call assignment 1 function
        else if (choice == 2)
            asg2(); // Call assignment 2 function
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
    cout << "Tämä on tehtävä 1. Ohjelma lukee halkaisija.txt tiedostosta pallon halkaisijan" << endl
	    << "ja sitten laskee sen tilavuuden." << endl << endl;

    double halkaisija, sade, tilavuus;
    double pi = 3.14159;

    ifstream inputFile("halkaisijat.txt");
    ofstream outputFile("tilavuudet.txt");

    for (int i = 0; i < 3; i++)
    {
	inputFile >> halkaisija;
	sade = halkaisija / 2.0;
	tilavuus = (4.0 / 3.0) * pi * sade * sade * sade;
	outputFile << "Pallo jonka halkaisija on " << halkaisija
	<< ", on tilavuudeltaan: " << tilavuus << endl;

	cout << "Pallo jonka halkaisija on " << halkaisija << ", on tilavuudeltaan: " << tilavuus << endl;
    }
}


void asg2()
{

	cout << "Tämä on tehtävä 2. Ohjelma lukee tekstin tiedostosta merkkivirta.txt ja kirjoittaa" << endl
		<< "saman tekstin isoilla kirjaimilla tiedostoon isotkirjaimet.txt." << endl << endl;

	ifstream inputFile("merkkivirta.txt");
	ofstream outputFile("isotkirjaimet.txt");

	char ch;

	while (inputFile.get(ch))
	{
		outputFile.put(toupper(ch));
	}

	cout << "Teksti muutettu isoiksi kirjaimiksi ja kirjoitettu tiedostoon isotkirjaimet.txt." << endl;
}
