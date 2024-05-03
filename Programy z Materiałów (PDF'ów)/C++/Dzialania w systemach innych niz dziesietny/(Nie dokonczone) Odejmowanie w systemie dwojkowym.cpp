// Program zle odejmuje liczby binarne

#include <string>
#include <iostream>

using namespace std;

string PrzeciwnaU2(string s)
{
    int i;
    for (i = 0; i < 8; i++)
    {
        if (s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }
    s = '0' + s;
    i = 8;
    while (s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    s[i] = '1';    
    return s.substr(1,8);    
}

string DodajU2(string a, string b)
{
    string result = "";
    int carry = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        result = to_string(sum % 2) + result;
        carry = sum / 2;
    }
    return result;
}

int main()
{
    string a, b, c;
    cout << "Liczba 1: ";
    cin >> a;
    cout << "Liczba 2: ";
    cin >> b;
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;
    b = PrzeciwnaU2(b);
    c = DodajU2(a, b);
    cout << "Roznica: " << c << endl;
    return 0;
}
