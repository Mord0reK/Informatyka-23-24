#include <iostream>

using namespace std;

int main()
{
    int dane[10][10], sum = 0;
    int przekatna = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i + j == 9)
            {
                dane[i][j] = przekatna;
                sum += dane[i][j];
                przekatna++;
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
    cout << "Suma: " << sum << endl;
    return 0;
}
