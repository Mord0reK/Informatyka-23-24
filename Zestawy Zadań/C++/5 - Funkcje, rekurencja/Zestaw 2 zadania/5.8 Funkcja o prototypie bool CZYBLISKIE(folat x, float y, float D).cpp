#include <iostream>
#include <cmath>

bool CZYBLISKIE(float x, float y, float D) {
    return std::fabs(x - y) < D;
}

int main() {
    float x, y;
    std::cout << "Podaj pierwsz¹ liczbê rzeczywist¹: ";
    std::cin >> x;
    std::cout << "Podaj drug¹ liczbê rzeczywist¹: ";
    std::cin >> y;
    if (CZYBLISKIE(x, y, 1)) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "PECH" << std::endl;
    }
    return 0;
}
