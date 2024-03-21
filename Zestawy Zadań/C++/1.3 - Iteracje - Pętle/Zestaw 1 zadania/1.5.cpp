// Napisz program, który za pomoc¹ instrukcji do ... while wyœwietla liczby ca³kowite od 1 do 20.

#include <iostream>

using namespace std;

int main() 
{
    int x = 1;
    do
    {
        cout << x << endl;
        x++;
    } while (x <= 20);
    return 0;
}
