#include <iostream>

int KODER(char a) {
    return (static_cast<int>(a) + 10) % 256;
}

int main() {
    char znak;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Podaj znak: ";
        std::cin >> znak;
        std::cout << "Zmodyfikowany kod znaku: " << KODER(znak) << std::endl;
    }
    return 0;
}
