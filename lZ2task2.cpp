#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, result;
    char op;

    cout << "������ ����� �����: ";
    cin >> a;
    cout << "������ �������� (+, -, *, /): ";
    cin >> op;
    cout << "������ ����� �����: ";
    cin >> b;

    switch (op) {
    case '+':
        result = a + b;
        cout << "���������: " << result << endl;
        break;
    case '-':
        result = a - b;
        cout << "���������: " << result << endl;
        break;
    case '*':
        result = a * b;
        cout << "���������: " << result << endl;
        break;
    case '/':
        if (b != 0)
            result = a / b;
        else {
            cout << "�������: ������ �� ����!" << endl;
            return 1;
        }
        cout << "���������: " << result << endl;
        break;
    default:
        cout << "������� ��������!" << endl;
    }

    return 0;
}
