#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Введите сумму покупки: ";
    cin >> amount;

    if (amount < 1000) {
        cout << "Скидка 0%" << endl;
        cout << "Итоговая сумма: " << amount << endl;
    }
    else if (amount <= 5000) {
        cout << "Скидка 5%" << endl;
        cout << "Итоговая сумма: " << amount * 0.95 << endl;
    }
    else if (amount <= 10000) {
        cout << "Скидка 10%" << endl;
        cout << "Итоговая сумма: " << amount * 0.90 << endl;
    }
    else {
        cout << "Скидка 15%" << endl;
        cout << "Итоговая сумма: " << amount * 0.85 << endl;
    }
    return 0;
}