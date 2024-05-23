#include <iostream>

int P(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return P(n - 1) + P(n - 2);
    }
}

int main() {
    for (int i = 1; i <= 20; ++i) {
        std::cout << P(i) << " ";
    }
    std::cout << std::endl;
    return 0;
}
