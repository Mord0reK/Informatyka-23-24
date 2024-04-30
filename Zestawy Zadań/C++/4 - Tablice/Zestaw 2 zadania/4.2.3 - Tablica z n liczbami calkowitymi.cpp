#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n < 1 || n > 201)
    {
        cout << "Musisz wprowadzic liczbe w zakresie (1 <= n <= 200): ";
        cin >> n;
    }
    vector<double> tab(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout << tab[i] << " ";
    }
}
