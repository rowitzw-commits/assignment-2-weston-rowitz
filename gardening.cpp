#include <iostream>

int main() {
    double n1, p1, k1;
    double n2, p2, k2;
    double n3, p3, k3;

    std::cout << "Enter n1 p1 k1: ";
    std::cin >> n1 >> p1 >> k1;

    std::cout << "Enter n2 p2 k2: ";
    std::cin >> n2 >> p2 >> k2;

    std::cout << "Enter n3 p3 k3: ";
    std::cin >> n3 >> p3 >> k3;


    double denom_common = (n2 - n3 + p3 - p2);

    double partA = (p3 - n3) / denom_common;
    double partB = (n1 - n3 + p3 - p1) / denom_common;

    double numerator_M1 =
        (k3 - n3) +
        (n3 - n2 + k2 - k3) * partA;

    double denominator_M1 =
        (k3 - n3) +
        (n1 - k1) +
        (n3 - n2 + k2 - k3) * partB;

    double M1 = numerator_M1 / denominator_M1;

    double M2 = (p3 - n3 - M1 * (n1 - n3 + p3 - p1)) / denom_common;

    double M3 = 1 - M1 - M2;

    double nitrogen = M1*n1 + M2*n2 + M3*n3;
    double phosphorus = M1*p1 + M2*p2 + M3*p3;
    double potassium = M1*k1 + M2*k2 + M3*k3;

    std::cout << "M1 = " << M1 << std::endl;
    std::cout << "M2 = " << M2 << std::endl;
    std::cout << "M3 = " << M3 << std::endl;

    std::cout << "Nitrogen: " << nitrogen << std::endl;
    std::cout << "Phosphorus: " << phosphorus << std::endl;
    std::cout << "Potassium: " << potassium << std::endl;

    return 0;
}
