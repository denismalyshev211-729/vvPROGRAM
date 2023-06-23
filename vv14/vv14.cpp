#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    //Задание 1
    cout << "Задание 1" << endl;
    int a, b;
    cout << "Введите число A: ";
    cin >> a;
    cout << "Введите число B: ";
    cin >> b;
    int i, j;
    for (i = a; i <= b; i++) {
        for (j = i; j >= 1; j--) {
            cout << i << " ";
        }
    }
    cout << endl;
    //Задание 2
    cout << "Задание 2" << endl;
    int a1, b1;
    cout << "Введите число A: ";
    cin >> a1;
    cout << "Введите число B: ";
    cin >> b1;
    int r = a1;
    while (r > b1) {
        r -= b1;
    }
    cout << "Длина незанятой части отрезка A: " << r << endl;
    //Задание 3
    cout << "Задание 3" << endl;
    int n;
    cout << "Введите N: ";
    cin >> n;
    int k = 0, r = 0;
    while (r < n) {
        k++;
        r += k;
    }
    cout << "Наименьшее число K: " << k << endl;
    cout << "Сумма: " << r << endl;
    //Задание 4
    cout << "Задание 4" << endl;
    double s1 = 1000;
    double p;
    cout << "Введите процент: ";
    cin >> p;
    double p1 = p / 100;
    int m = 0;
    while (s1 < 1100) {
        s1 += s1 * p1;
        m += 1;
    }
    cout << "Количество месяцев: " << m << endl;
    cout << "Сумма вклада: " << s1 << endl;
    //Задание 5
    cout << "Задание 5" << endl;
    int a2, b2;
    cout << "Введите число A: ";
    cin >> a2;
    cout << "Введите число B: ";
    cin >> b2;
    int c2;
    while (b2 > 0) {
        c2 = a2 % b2;
        a2 = b2;
        b2 = c2;
    }
    cout << "НОД: " << a2 << endl;
    //Задание 6
    cout << "Задание 6" << endl;
    int n1;
    cout << "Введите N: ";
    cin >> n1;
    int f1 = 1, f2 = 1, f = 0, k1 = 2;
    while (f < n1) {
        ++k1;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    cout << "Порядковый номер числа Фибоначчи: " << k1 << endl;
}