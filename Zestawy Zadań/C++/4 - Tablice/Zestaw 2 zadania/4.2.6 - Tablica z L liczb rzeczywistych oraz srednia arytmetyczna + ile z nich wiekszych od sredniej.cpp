#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int L, licznik=0;
    double * wiekszeodsredniej;
    double sum = 0, srednia = 0;
    cout << "Podaj liczbe z przedzialu (0 < L < 50): ";
    cin >> L;
    while (L < 0 || L > 50)
    {
        cout << "Podaj liczbe z przedzialu (0 < L < 50): ";
        cin >> L;
    }
    vector<double> liczby(L);
    for (int i = 0; i < L; i++)
    {
        cout << "Podaj liczbe: ";
        cin >> liczby[i];
        sum += liczby[i];
    }
    srednia = sum / L;
    for (int i = 0; i < L; i++)
    {
        if (srednia < liczby[i])
        {
            licznik++;
        }
    }
    cout << "Srednia arytmetyczna liczb: " << srednia << endl;
    cout << "Ilosc liczb wiekszych od sredniej: " << licznik << endl;
}
