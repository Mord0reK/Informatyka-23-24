#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));
	int losowana, wpisana;
	losowana = rand() % 7;
	cin >> wpisana;
	if (losowana == wpisana)
	{
		cout << "brawo" << endl;
	}
}

