#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, result;
    char op;

    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть оператор (+, -, *, /): ";
    cin >> op;
    cout << "Введіть друге число: ";
    cin >> b;

    switch (op) {
    case '+':
        result = a + b;
        cout << "Результат: " << result << endl;
        break;
    case '-':
        result = a - b;
        cout << "Результат: " << result << endl;
        break;
    case '*':
        result = a * b;
        cout << "Результат: " << result << endl;
        break;
    case '/':
        if (b != 0)
            result = a / b;
        else {
            cout << "Помилка: ділення на нуль!" << endl;
            return 1;
        }
        cout << "Результат: " << result << endl;
        break;
    default:
        cout << "Невірний оператор!" << endl;
    }

    return 0;
}
