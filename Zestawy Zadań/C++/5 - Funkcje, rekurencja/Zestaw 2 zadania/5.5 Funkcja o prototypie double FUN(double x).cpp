#include <iostream>
#include <cmath>

double FUN(double x) {
    return pow(x, 3) - 70 * pow(x, 2) - 4000 * x + 100000;
}

int main() {
    for (int i = -1000; i <= 1000; ++i) {
        if (FUN(i) == 0) {
            std::cout << "FUN(" << i << ") = 0" << std::endl;
        }
    }
    return 0;
}
