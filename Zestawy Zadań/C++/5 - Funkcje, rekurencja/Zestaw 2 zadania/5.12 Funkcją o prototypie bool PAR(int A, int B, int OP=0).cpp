#include <iostream>
#include <cmath>

unsigned long long silnia(int N) {
    unsigned long long result = 1;
    for (int i = 2; i <= N; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int x, n;
    std::cout << "Podaj liczbê ca³kowit¹ x: ";
    std::cin >> x;
    std::cout << "Podaj liczbê ca³kowit¹ n: ";
    std::cin >> n;
    double suma = 0;
    for (int i = 0; i <= n; ++i) {
        suma += pow(x, i) / silnia(i);
    }
    std::cout << "Wynik: " << suma << std::endl;
    return 0;
}
