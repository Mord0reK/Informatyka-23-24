#include <iostream>
#include <cmath>

double COS(double x, double epsilon) {
    double result = 1;
    double term = 1;
    int k = 0;
    while (std::fabs(term) > epsilon) {
        k++;
        term *= -x * x / (2 * k * (2 * k - 1));
        result += term;
    }
    return result;
}

int main() {
    double x, epsilon;
    std::cout << "Podaj liczbê rzeczywist¹ x: ";
    std::cin >> x;
    std::cout << "Podaj dok³adnoœæ epsilon: ";
    std::cin >> epsilon;
    std::cout << "Wartoœæ cos(x): " << COS(x, epsilon) << std::endl;
    return 0;
}
