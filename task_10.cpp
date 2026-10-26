#include <iostream>
using namespace std;

int main() {
    int hour;
    cout << "Введите текущий час (0-23): ";
    cin >> hour;

    if (hour >= 0 && hour <= 23) {
        if (hour >= 6 && hour <= 11) {
            cout << "Доброе утро" << endl;
        }
        else if (hour >= 12 && hour <= 17) {
            cout << "Добрый день" << endl;
        }
        else if (hour >= 18 && hour <= 22) {
            cout << "Добрый вечер" << endl;
        }
        else {
            cout << "Доброй ночи" << endl;
        }
    }
    else {
        cout << "Ошибка: некорректное время" << endl;
    }
    return 0;
}