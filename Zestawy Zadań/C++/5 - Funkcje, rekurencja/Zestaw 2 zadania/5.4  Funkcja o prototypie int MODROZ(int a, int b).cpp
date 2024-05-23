#include <iostream>
#include <cstdlib>

int MODROZ(int a, int b) {
    return std::abs(a - b);
}

int main() {
    int X, Y;
    std::cout << "Podaj pierwsz¹ liczbê ca³kowit¹: ";
    std::cin >> X;
    std::cout << "Podaj drug¹ liczbê ca³kowit¹: ";
    std::cin >> Y;
    std::cout << "Wynik: " << MODROZ(X, Y) << std::endl;
    return 0;
}
