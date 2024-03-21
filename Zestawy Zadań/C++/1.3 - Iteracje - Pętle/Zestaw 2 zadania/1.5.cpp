// Napisz program, który wypisze liczby całkowite od – 20 do 20 w kolejnych wierszach.
// Zastosuj pętlę for

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    for (i = 0; i <= 40; i++)
    {
        cout << i - 20 << " ";
    }
    return 0;
}

