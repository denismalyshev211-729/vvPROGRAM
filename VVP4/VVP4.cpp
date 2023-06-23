#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Задание 1. Введите стороны прямоугольника a u b." << endl;
    int a, b;
    std::cin >> a >> b;
    int P, S;
    P = 2 * (a + b);
    S = a * b;
    cout << "Площадь прямоугольника равна " << S << endl;
    cout << "Периметр прямоугольника равен " << P << endl << endl;


    cout << "Задание 2. Укажите периметр окружности d. " << endl;
    int d;
    double pi = 3.14, L;
    cin >> d;
    L = pi * d;
    cout << "Периметр окружности равен " << L << endl << endl;

    cout << "Задание 3. Введите числа g u h" << endl;
    double g, h;
    cin >> g >> h;
    double Sr = (g + h) / 2;
    cout << "Среднее арифметическое чисел равно " << Sr << endl << endl;

    cout << "Задание 4. Введите два ненулевых числа. " <<endl;
    double x, y;
    cin >> x >> y;
    double U, I, O, K;
    U = pow(x,2) + pow(y,2);
    I = pow(x, 2) - pow(y, 2);
    O = pow(x, 2) * pow(y, 2);
    K = pow(x, 2) / pow(y, 2);
    cout << "Сумма квадратов равна " << U << endl << "Разность квадратов равна  " << I << endl << "Произведение квадратов равное " << O << endl << "Частное квадратов равно " << K << endl << endl;
       
    cout << "Задание 5. Введите два ненулевых числа." << endl;
    double j, f, pr, su, ra, cha;
    cin >> j >> f;
    su = abs(j) + abs(f);
    ra = abs(j) - abs(f);
    pr = abs(j) * abs(f);
    cha = abs(j) / abs(f);
    cout << "Сумма модулей равна " << su << endl << "Разность модулей равна " << ra << endl << "Произведение модулей равно " << pr << endl << "Частное модулей равно " << cha << endl << endl;


}

