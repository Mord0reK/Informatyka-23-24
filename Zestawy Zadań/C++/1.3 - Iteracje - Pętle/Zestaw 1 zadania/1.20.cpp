//Napisz program wyœwietlaj¹cy tabliczkê mno¿enia dla liczb od 1 do 100 z wykorzystaniem podwójnej pêtli do ... while

#include <iostream>

using namespace std;

int main() {
    int i = 1;
    do
    {
        int j = 1;
        do
        {
            cout << i * j << "\t ";
            j++;
        } while (j <= 10);

        cout << endl;
        i++;
    } while (i <= 10);
    return 0;
}

