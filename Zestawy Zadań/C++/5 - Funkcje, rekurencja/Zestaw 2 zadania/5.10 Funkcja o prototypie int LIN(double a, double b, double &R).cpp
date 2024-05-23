#include <iostream>

unsigned long long FAK(int N) {
    if (N == 0 || N == 1) {
        return 1;
    } else {
        return N * FAK(N - 1);
    }
}

int main() {
    for (int i = 1; i <= 20; ++i) {
        std::cout << i << "! = " << FAK(i) << std::endl;
    }
    return 0;
}
