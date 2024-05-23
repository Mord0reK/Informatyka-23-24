#include <iostream>

double S4(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 1.0 / (n * (2 * n - 1)) + S4(n - 1);
    }
}

int main() {
    int N;
    std::cout << "Podaj liczbê ca³kowit¹: ";
    std::cin >> N;
    std::cout << "Wynik: " << S4(N) << std::endl;
    return 0;
}
