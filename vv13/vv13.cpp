#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    //Задание 1
    cout << "Задание 1" << endl;
    double a;
    cout << "Введите цену за 1 кг конфет: ";
    cin >> a;
    cout << a * 0.1 << " " << a * 0.2 << " " << a * 0.3 << " " << a * 0.4 << " " << a * 0.5 << " " << a * 0.6 << " " << a * 0.7
        << " " << a * 0.8 << " " << a * 0.9 << " " << a << endl;
    //Задание 2
    cout << "Задание 2" << endl;
    int n;
    cout << "Введите число: ";
    cin >> n;
    double c1 = 1.1;
    double c2 = 1.2;
    for (int i = 1; i < n; i++) {
        c1 = c1 * c2;
        c2 = c2 + 0.1;
    }
    cout << "Произведение N сомножителей: " << c1 << endl;
    //Задание 3
    cout << "Задание 3" << endl;
    int n1;
    cout << "Введите число: ";
    cin >> n1;
    double r1 = 0;
    for (int i = 1; i <= 2 * n1 - 1; i++) {
        if (i % 2 != 0) {
            r1 = r1 + i;
            cout << r1 << " ";
        }
    }
    cout << endl;
    cout << "Квадрат числа: " << r1 << endl;
    //Задание 4
    cout << "Задание 4" << endl;
    int n2;
    double a2;
    cout << "Введите число A: ";
    cin >> a2;
    cout << "Введите число N: ";
    cin >> n2;
    double r2 = 0;
    for (int i = 0; i <= n2; i++) {
        r2 = r2 + pow(a2, i);
    }
    cout << "Результат: " << r2 << endl;
    //Задание 5
    cout << "Задание 5" << endl;
    int n3;
    double a3;
    cout << "Введите число A: ";
    cin >> a3;
    cout << "Введите число N: ";
    cin >> n3;
    double r3 = 1, c3 = 1;
    for (int i = 1; i <= n3; i++) {
        c3 *= a3 * (-1);
        r3 += c3;
    }
    cout << "Результат: " << r3 << endl;
}