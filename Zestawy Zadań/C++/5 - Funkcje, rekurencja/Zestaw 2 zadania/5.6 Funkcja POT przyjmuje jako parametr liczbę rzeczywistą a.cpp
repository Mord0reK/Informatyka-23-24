#include <iostream>

double POT(double a, int n) {
    double result = 1;
    for (int i = 0; i < n; ++i) {
        result *= a;
    }
    return result;
}

int main() {
    double R;
    std::cout << "Podaj liczbê rzeczywist¹: ";
    std::cin >> R;
    for (int i = 1; i <= 20; ++i) {
        std::cout << POT(R, i) << " ";
    }
    std::cout << std::endl;
    return 0;
}
