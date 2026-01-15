// Arttu Pietarinen
// 25tietoB
// Viikon 44 harjoitukset

#include <iostream>
#include <ctime>
using namespace std;


void merkit(char merkki, int määrä);
void kertomafunktio(int luku);
void tilavuus(int korkeus, int leveys, int syvyys);
void asg1();
void asg2();
void asg3();


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

void asg1()
{
	char merkki;
	int määrä;

	cout << endl << "Anna merkki jonka haluat tulostaa: "; 
	cin >> merkki;
	cout << endl << "Montako kertaa haluat tulostaa merkin: ";
	cin >> määrä;
	cout << endl;

	merkit(merkki, määrä);
	
} 



void asg2()
{

	int luku;
	cout << endl << "Anna luku: ";
	cin >> luku;
	cout << endl;

	if (luku < 0){
		cout << "Virhe: negatiivinen luku!" << endl;
		return;
	}

	kertomafunktio(luku);
} 

void asg3()
{
	int korkeus, leveys, syvyys;

	cout << endl << "Anna seuraavat tiedot suorakulmaisen särmiön tilavuuden laskemiseksi." << endl;
	cout << "Korkeus: ";
	cin >> korkeus;
	cout << "Leveys: ";
	cin >> leveys;
	cout << "Syvyys: ";
	cin >> syvyys;
	cout << endl;

	tilavuus(korkeus, leveys, syvyys);
} 


void merkit(char merkki, int määrä){

	for (int i = 0; i < määrä; i++){
		cout << merkki;
	}
}

void kertomafunktio(int luku){

	int tulos = 1;
	for (int i = 1; i <= luku; i++){
		tulos = tulos * i;
	}

	cout << "Luvun " << luku << " kertoma on: " << tulos << endl;
}

void tilavuus(int korkeus, int leveys, int syvyys){
	int lasku;
	lasku = korkeus * leveys * syvyys;
	cout << "Suorakulmaisen särmiön tilavuus on: " << lasku << endl;
}


