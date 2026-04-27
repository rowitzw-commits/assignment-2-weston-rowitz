#include <iostream>

using namespace std;

int main() {
    double n1, p1, k1;
    double n2, p2, k2;
    double n3, p3, k3;

    // Input
    cout << "Enter n1 p1 k1: ";
    cin >> n1 >> p1 >> k1;

    cout << "Enter n2 p2 k2: ";
    cin >> n2 >> p2 >> k2;

    cout << "Enter n3 p3 k3: ";
    cin >> n3 >> p3 >> k3;

    // ---- Solve for M1 ----

    double denom = (n2 - n3 + p3 - p2);

    double partA = (p3 - n3) / denom;
    double partB = (n1 - n3 + p3 - p1) / denom;
    double partC = (n3 - n2 + k2 - k3);

    double numerator = (k3 - n3) + partC * partA;
    double denominator = (k3 - n3) + (n1 - k1) + partC * partB;

    double M1 = numerator / denominator;

    // ---- Solve for M2 ----

    double M2 = (p3 - n3 - M1 * (n1 - n3 + p3 - p1)) / denom;

    // ---- Solve for M3 ----

    double M3 = 1 - M1 - M2;

    // ---- Final proportions ----

    double nitrogen = M1 * n1 + M2 * n2 + M3 * n3;
    double phosphorus = M1 * p1 + M2 * p2 + M3 * p3;
    double potassium = M1 * k1 + M2 * k2 + M3 * k3;

    // ---- Output ----

    cout << "M1: " << M1 << endl;
    cout << "M2: " << M2 << endl;
    cout << "M3: " << M3 << endl;

    cout << "Nitrogen: " << nitrogen << endl;
    cout << "Phosphorus: " << phosphorus << endl;
    cout << "Potassium: " << potassium << endl;

    return 0;
}
