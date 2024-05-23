#include <iostream>
#include <algorithm>

void PORZ3(double &L1, double &L2, double &L3) {
    double temp[3] = {L1, L2, L3};
    std::sort(temp, temp + 3);
    L1 = temp[0];
    L2 = temp[1];
    L3 = temp[2];
}

int main() {
    double L1, L2, L3;
    while (true) {
        std::cout << "Podaj pierwsz¹ liczbê rzeczywist¹: ";
        std::cin >> L1;
        std::cout << "Podaj drug¹ liczbê rzeczywist¹: ";
        std::cin >> L2;
        std::cout << "Podaj trzeci¹ liczbê rzeczywist¹: ";
        std::cin >> L3;
        PORZ3(L1, L2, L3);
        std::cout << L1 << " " << L2 << " " << L3 << std::endl;
        if (L1 == 0 && L2 == 0 && L3 == 0) {
            break;
        }
    }
    return 0;
}
