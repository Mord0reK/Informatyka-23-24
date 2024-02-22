//Napisz program, który wypisze liczbê rzeczywist¹ wylosowan¹ z przedzia³u od L do H
//(zak³adamy L < H).Przy czym L i H s¹ sta³ymi rzeczywistymi i wynosz¹ odpowiednio - 10 oraz 10.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int l = -10, h = 10;
	srand(time(NULL));
	cout << (rand() % 10) - 10 << endl;
	return 0;
}
