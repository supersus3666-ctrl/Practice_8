#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            cout << "Уравнение не имеет смысла" << endl;
        }
        else {
            double x = -c / b;
            cout << "Один корень: " << x << endl;
        }
    }
    else {
        double D = b * b - 4 * a * c;
        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Два корня: " << x1 << " и " << x2 << endl;
        }
        else if (D == 0) {
            double x = -b / (2 * a);
            cout << "Один корень: " << x << endl;
        }
        else {
            cout << "Корней нет" << endl;
        }
    }
    return 0;
}