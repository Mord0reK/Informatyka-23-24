//Napisz program, który wypisze liczbę rzeczywistš wylosowanš z przedziału od L do H
//(zakładamy L < H).Przy czym L i H sš stałymi rzeczywistymi i wynoszš odpowiednio - 10 oraz 10.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int l = 10, h = 20;
	srand(time(NULL));
	cout << (rand() % h) - l << endl;
	return 0;
}
