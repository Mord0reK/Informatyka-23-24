#include <iostream>

using namespace std;

int main()
{
    int dane[10][10], sum1 = 0, sum2 = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
            {
                dane[i][j] = i;
                sum1 += dane[i][j];
            }
            else if (j == 1)
            {
                dane[i][j] = i * i;
                sum2 += dane[i][j];
            }
            else
            {
                dane[i][j] = 0;
            }
            cout << dane[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Suma pierwszej kolumny: " << sum1 << endl;
    cout << "Suma drugiej kolumny: " << sum2 << endl;
    return 0;
}
