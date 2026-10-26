#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    if (operation == '+') {
        cout << "Результат: " << num1 + num2 << endl;
    }
    else if (operation == '-') {
        cout << "Результат: " << num1 - num2 << endl;
    }
    else if (operation == '*') {
        cout << "Результат: " << num1 * num2 << endl;
    }
    else if (operation == '/') {
        if (num2 == 0) {
            cout << "Ошибка: деление на ноль" << endl;
        }
        else {
            cout << "Результат: " << num1 / num2 << endl;
        }
    }
    else {
        cout << "Неверная операция" << endl;
    }
    return 0;
}