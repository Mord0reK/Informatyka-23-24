//Napisz program, który:
//a.wypisuje liczbę całkowitš wylosowanš z przedziału od 0 do 499 (włšcznie)
//b.wypisuje liczbę całkowitš wylosowanš z przedziału od - 100 do 100 (włšcznie)
//Liczby powinny się zmieniać przy kolejnym uruchomieniu programu.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL)); // funkcja by byly inne liczby bo resecie programu
	int liczba_a = rand() % 500;
	cout << "Wylosowana liczba z przedzialu 0-499: " << liczba_a << endl;
	int liczba_b = (rand() % 200) - 100;
	cout << "Wylosowana liczba z przedzialu -100-100: " << liczba_b << endl;
	return 0;
}
