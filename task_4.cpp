#include <iostream>
using namespace std;

int main() {
    int points;
    cout << "Введите количество баллов (0-100): ";
    cin >> points;

    if (points >= 90) {
        cout << "Отлично" << endl;
    }
    else if (points >= 75) {
        cout << "Хорошо" << endl;
    }
    else if (points >= 60) {
        cout << "Удовлетворительно" << endl;
    }
    else {
        cout << "Неудовлетворительно" << endl;
    }
    return 0;
}