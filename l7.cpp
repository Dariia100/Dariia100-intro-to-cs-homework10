#include <iostream>
#include <cmath>
#include <format>

using namespace std;

double f(double x) {
    return log(x) / log(2);
}

int main() {
    double x;
    cout << "Enter the value of x: " << endl;
    cin >> x;
    if (x <= 0) {
        cerr << "error" << endl;
        return 1;
    }

    double result = f(x);
    cout << format("{:.5f}", result) << endl;
}