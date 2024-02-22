//Napisz program, który:
//a. pobiera liczby rzeczywiste x i y
//b. wypisuje œredni¹ arytmetyczn¹ x i y
//c. pobiera liczby ca³kowite u i v
//d. wypisuje œredni¹ arytmetyczn¹ u i v.
//W programie umieœæ dowolne komentarze.

#include <iostream>

using namespace std;

int main() {
	double x, y, u, v;
	cin >> x >> y;
	cout << (x + y) / 2 << endl;
	cin >> u >> v;
	cout << (u + v) / 2 << endl;
	return 0;
}