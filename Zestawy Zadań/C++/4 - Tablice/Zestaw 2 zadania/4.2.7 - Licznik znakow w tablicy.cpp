#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, licznik = 0;
    cout << "Podaj liczbe z przedzialu (1 < n < 100): ";
    cin >> n;
    while (n < 1 || n > 100)
    {
        cout << "Podaj liczbe z przedzialu (1 < n < 100): ";
        cin >> n;
    }
    vector<char> znaki(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj znak: ";
        cin >> znaki[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (znaki[i] == znaki[n - 1])
        {
            licznik++;
        }
    }
    cout << "Znak " << znaki[n - 1] << " znalazl sie w tablicy " << licznik << " razy." << endl;
    
}
