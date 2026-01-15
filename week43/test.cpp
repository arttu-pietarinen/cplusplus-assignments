#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int search(vector<int> &arr, int target, int &count) {

count = 0; // Initialize count of comparisons
    for (size_t i = 0; i < arr.size(); i++) {
	if (arr[i] == target) {
	    return i; // Return index if found
	}
    }
    return -1; // Return -1 if not found

}

int main() {

   int count; // Variable to hold number of comparisons
	
   srand(time(0)); // Seed the random number generator

   vector <int> luvut; // Array to hold 8 integers

   for (int i = 0; i < 8; i++) {
       int randomNum = rand() % 101 + 1; // Generate random number between 1 and 100
       luvut.push_back(randomNum);       // Store random number in the array

   }

   int haettava;
   cout << "Syötä haettava luku (1-100): ";
   cin >> haettava;

   int index = search(luvut, haettava, count);
   if (index != -1) {
       cout << "Luku " << haettava << " löytyi indeksistä " << index << "." << endl;
   } else {
       cout << "Lukua " << haettava << " ei löytynyt." << endl;
   }



return 0;
}


