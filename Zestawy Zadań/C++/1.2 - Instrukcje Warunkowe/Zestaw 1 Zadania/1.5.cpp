#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    int losowana = 0, wpisana = 0;
    losowana = rand() % 9;
    cin >> wpisana;
    cout << losowana;
    if (wpisana == losowana)
    {
        cout << "zgadles" << endl;
    }
    else
    {
        cout << "pudlo" << endl;
    }
}

