#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");

    for (int i = 0; i < 1;) {
        int number;
        cout << "Введите номер задания(1 - 7): ";
        cin >> number;
        switch (number) {
        case 1:
            int a, b;
            cout << endl << "Введите число А: ";
            cin >> a;
            cout << endl << "Введите число B: ";
            cin >> b;
            if (a > 2 && b <= 3) {
                cout <<endl<< "Оба верны."<<endl;
            }
            else if (a > 2)
            {
                cout << endl << "A>2. Верно.\nВ<=3. Неверно." << endl;
            }
            else if (b <= 3)
            {
                cout << endl << "A>2. Неверно.\nВ<=3. Верно." << endl;
            }else cout << endl << "Оба неверны." << endl;
            break;
        case 2:
            int c;
            cout << endl << "Введите число А: ";
            cin >> a;
            cout << endl << "Введите число B: ";
            cin >> b;
            cout << endl << "Введите число C: ";
            cin >> c;
            if (b > a && b < c) {
                cout << endl << "Неравенство справедливо." << endl;
            }
            else cout << endl << "Неравенство не справедливо." << endl;
            break;
        case 3:
            cout << endl << "Введите целое положительное число А: ";
            cin >> a;
            if (a > 9 && a % 2 == 0) {
                cout << endl << "Данное число является четным двузначным." << endl;
            }else  cout << endl << "Данное число НЕ является четным двузначным." << endl;
            break;
        case 4:
            int k;
            cout << endl << "Введите трехзначное число: ";
            cin >> k;
            a = k / 100;
            if (k % 100 < 10) {
                b = 0;
            } else b = (k % 100)/10;
            if (b == 0) {
                c = k % 100;
            }
            else c = k % 100 % 10;
            if (a < b && b < c) {
                cout << a << b << c;
                cout << endl << "Цифры образуют возрастающую последовательность." << endl;
            }
            else if (a > b && b > c) {
                cout << a << b << c;
                cout << endl << "Цифры образуют убывающую последовательность." << endl;
            }
            else cout << endl << "Последовательность не однозначна." << endl;
            break;
        case 5:
            int d;
            cout << endl << "Введите четырехзначное число: ";
            cin >> k;
            a = k / 1000;

            if (k % 1000 < 100) {
                b = 0;
            }
            else b = (k % 1000) / 100;

            if (b == 0) {
                c = (k % 1000) / 10;
            }
            else if (((k % 1000) % 100 < 10)) {
                c = 0;
            }
            else c = ((k % 1000) % 100) / 10;
            
            if (c == 0 && b == 0) {
                d = k % 1000;
            }
            else if (b == 0) {
                d = k % 1000 % 10;
            }
            else if (c == 0) {
                d = k % 1000 % 100;
            }
            else d = k % 1000 % 100 % 10;

            if (a == d && b == c) {
                cout << a  << endl << b << endl << c << endl << d;
                cout << endl << "Данное число читается одинаково слева направо и справа налево." << endl;
            }
            else {
                cout << a << endl << b << endl << c << endl << d;
                cout << endl << "Число не имеет зеркального свойства." << endl;
            }
            break;
        case 6:
            cout << endl << "Введите сторону А: ";
            cin >> a;
            cout << endl << "Введите сторону B: ";
            cin >> b;
            cout << endl << "Введите сторону C: ";
            cin >> c;

            if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
                cout << endl << "Треугольник является прямоугольным." << endl;
            }else cout << endl << "Треугольник не является прямоугольным." << endl;
            break;
        case 7:
            cout << endl << "Введите число А: ";
            cin >> a;
            cout << endl << "Введите число B: ";
            cin >> b;
            cout << endl << "Введите число C: ";
            cin >> c;
            if (a > 0 && b > 0 && c > 0) {
                cout << endl << "Существует треугольник с такими сторонами." << endl;
            }else cout << endl << "Треугольника с такими сторонами не существует." << endl;
            break;
        }
        cout << endl << endl;
    }
}