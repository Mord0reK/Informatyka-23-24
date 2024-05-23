#include <iostream>

double S5(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 1.0 / (n * (n + 1)) + S5(n - 1);
    }
}

int main() {
    int N;
    std::cout << "Podaj liczbê ca³kowit¹: ";
    std::cin >> N;
    std::cout << "Wynik: " << S5(N) << std::endl;
    return 0;
}
