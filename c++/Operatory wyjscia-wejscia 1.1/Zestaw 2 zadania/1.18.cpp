//Napisz program, który:
//a.Posiada zmienn¹ B typu logicznego
//b.Posiada zmienn¹ Z typu znakowego
//c.Pobiera od u¿ytkownika liczbê ca³kowit¹ i wprowadza do zmiennej B oraz do zmiennej Z
//d.Wyœwietla wartoœæ, któr¹ przechowuje zmienna B
//e.Wyœwietla znak przechowywany przez Z.

#include <iostream>

using namespace std;

int main() {
	bool b;
	char z;
	int a;
	cin >> a;
	b = static_cast<bool>(a);
	z = static_cast<char>(a);
	cout << boolalpha << b << endl;
	cout << z << endl;
	return 0;
}