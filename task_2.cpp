#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "Наибольшее число: " << a << endl;
    }
    else if (b >= a && b >= c) {
        cout << "Наибольшее число: " << b << endl;
    }
    else {
        cout << "Наибольшее число: " << c << endl;
    }
    return 0;
}