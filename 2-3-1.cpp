#include <iostream>

using namespace std;

double sqrt(double x);
int main(void) {
    cout << "Enter a number i will compute it's sqrt:" << endl;
    double x;
    cin >> x;
    cout << sqrt(x) << endl;
    return 0;
}

double sqrt(double x) {
    double x1 = x;
    xn = 1.0 / 2.0 * (x + x / x);
    while ((xn - x1) >= 0.0001) {
        x1 = xn;
        xn = 1.0 / 2.0 * (x1 + x / x1);
    }
    return xn;
}