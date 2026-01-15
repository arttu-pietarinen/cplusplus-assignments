// Arttu Pietarinen
// 25tietoB
// Viikon 45 harjoitukset
// Kaikki tehty kaikilla lisapisteilla

#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>
using namespace std;
using namespace std::chrono;

void lukuarvonta();
void fiboluvutEIRECU(int n);
void fiboluvutRECU(int n, int a = 0, int b = 1); 
bool tarkistaIka(int ika);
void asg1();
void asg2();
void asg3();


int main()
{

    int choice; // Variable to hold user choice

    do
    {
        cout << endl;
        cout << "Week 45 assignments" << endl;
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
	cout << "Tama ohjelma tarkistaa onko henkilö teini-ikainen." << endl;
	cout << "Anna henkilon ika: ";
	int ika;
	cin >> ika;
	bool tulos = tarkistaIka(ika);
	cout << endl;
	cout << boolalpha << tulos << endl;
} 

void asg2()
{
	cout << "Tama ohjelma kertoo Fibonaccio lukujonon lukuja." << endl
		<< "Lukujen määrä (2-25): ";
	int n;
	cin >> n;
	if (n < 2 || n > 25){
		cout << "Virheellinen maara." << endl;
		return;
	}
	fiboluvutEIRECU(n);
	fiboluvutRECU(n);
} 

void asg3()
{
	cout << "Tama ohjelma arpoo 1000 lukua (1-2-3-4) ja laskee niiden esiintymat." << endl << endl;	

	lukuarvonta();
} 

bool tarkistaIka(int ika)
{
	if (ika >= 13 && ika <= 19){
		return true;
	} else {
		return false;
	}
}

void fiboluvutEIRECU(int n)
{

	int a = 0;
	int b = 1;
	int seuraava;

	for (int i = 1; i <= n; ++i){
		cout << a << " ";
		seuraava = a + b;
		a = b;
		b = seuraava;
	}

	cout << endl;

}

void fiboluvutRECU(int n, int a, int b) {
    if (n <= 0) return;

    cout << a << " ";
    fiboluvutRECU(n - 1, b, a + b);
}

void lukuarvonta() //arpoo 1000 lukua (1-2-3-4) ja laskee niiden esiintymat sekä prosentit
{
	srand(static_cast<unsigned int>(time(0))); 

	const int SIZE = 4;
	int counts[SIZE] = {0}; 

	for (int i = 0; i < 1000; ++i) {
		int randomNum = rand() % SIZE; // Arvotaan luku väliltä 0-3
		counts[randomNum]++;        
	}

	for (int i = 0; i < SIZE; ++i) {
		double percentage = (counts[i] / 1000.0) * 100; // Lasketaan prosenttiosuus
		cout << "Luku " << (i + 1) << ": " << counts[i] 
		<< " kertaa (" << percentage << "%)" << endl;
		}


	cout << endl << "Histogrammi:" << endl;

	for (int i = 0; i < SIZE; ++i) {
    		int bars = counts[i];
		cout << "Luku " << (i + 1) << ": ";
    		for (int j = 0; j < bars; ++j) {
        	cout << "*";
    		}
    		cout << endl;
		}

		cout << endl << "Arvotaan nyt lukuja INT_MAX kertaa ja tulostetaan vain kuinka kauan siinä kestää." << endl;
		
		auto start = high_resolution_clock::now();
		for (int i = 0; i < INT_MAX; ++i) {
			(void)(rand() % SIZE); // Arvotaan luku väliltä 0-3 (void jotta vältetään varoitus käyttämättömästä muuttujasta)
		}
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		double seconds = duration.count() / 1e6;
		cout << setprecision(3) << fixed;
		cout << "Aikaa kului " << seconds << " sekuntia. " << endl;
}
