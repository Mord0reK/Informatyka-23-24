//Napisz program, który:
//a. pobiera liczby rzeczywiste x i y
//b. wypisuje średnią arytmetyczną x i y
//c. pobiera liczby całkowite u i v
//d. wypisuje średnią arytmetyczną u i v.
//W programie umieść dowolne komentarze.

#include <iostream>

using namespace std;

int main() {
	double x, y;
	int u, v;
	cin >> x >> y;
	cout << (x + y) / 2 << endl;
	cin >> u >> v;
	cout << (u + v) / 2 << endl;
	return 0;
}
