#include <iostream>

using namespace std;

int PowerA3(double a, double b) {
    b = a * a * a;
    return b;
}

int Sign(double x) {
    if (x < 0) {
        return -1;
    }
    else if (x == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

double RingS(double r1, double r2) {
    double res = 3.14 * ((r1 * r1) - (r2 * r2));
    return res;
}

int Quarter(double x, double y) {
    if (x > 0 && y > 0) {
        return 1;
    }
    else if (x < 0 && y > 0) {
        return 2;
    }
    else if (x < 0 && y < 0) {
        return 3;
    }
    else if (x > 0 && y < 0) {
        return 4;
    }
}

double Fact2(int n) {
    double res = 1;
    if (n % 2 != 0) {
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                res *= i;
            }
        }
    }
    else {
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                res *= i;
            }
        }
    }
    return res;
}

int main()
{
    setlocale(0, "Russian");
    //Задание 1
    cout << "Задание 1" << endl;
    double n1, n2, n3, n4, n5;
    cout << "Введите число 1: ";
    cin >> n1;
    cout << "Введите число 2: ";
    cin >> n2;
    cout << "Введите число 3: ";
    cin >> n3;
    cout << "Введите число 4: ";
    cin >> n4;
    cout << "Введите число 5: ";
    cin >> n5;
    cout << "Третья степень числа 1: " << PowerA3(n1, 0) << endl;
    cout << "Третья степень числа 2: " << PowerA3(n2, 0) << endl;
    cout << "Третья степень числа 3: " << PowerA3(n3, 0) << endl;
    cout << "Третья степень числа 4: " << PowerA3(n4, 0) << endl;
    cout << "Третья степень числа 5: " << PowerA3(n5, 0) << endl;
    //Задание 2
    cout << "Задание 2" << endl;
    double a1, b1;
    cout << "Введите число A: ";
    cin >> a1;
    cout << "Введите число B: ";
    cin >> b1;
    cout << "Результат: " << Sign(a1) + Sign(b1) << endl;
    //Задание 3
    cout << "Задание 3" << endl;
    double c1, c2, c3, c4, c5, c6;
    cout << "Введите внешний радиус первого кольца: ";
    cin >> c1;
    cout << "Введите внутренний радиус первого кольца: ";
    cin >> c2;
    cout << "Введите внешний радиус второго кольца: ";
    cin >> c3;
    cout << "Введите внутренний радиус второго кольца: ";
    cin >> c4;
    cout << "Введите внешний радиус третьего кольца: ";
    cin >> c5;
    cout << "Введите внутренний радиус третьего кольца: ";
    cin >> c6;
    cout << "Площадь первого кольца: " << RingS(c1, c2) << endl;
    cout << "Площадь второго кольца: " << RingS(c3, c4) << endl;
    cout << "Площадь третьего кольца: " << RingS(c5, c6) << endl;
    //Задание 4
    cout << "Задание 4" << endl;
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координату X первой точки: ";
    cin >> x1;
    cout << "Введите координату Y первой точки: ";
    cin >> y1;
    cout << "Введите координату X второй точки: ";
    cin >> x2;
    cout << "Введите координату Y второй точки: ";
    cin >> y2;
    cout << "Введите координату X третьей точки: ";
    cin >> x3;
    cout << "Введите координату Y третьей точки: ";
    cin >> y3;
    cout << "Координатная четверть первой точки: " << Quarter(x1, y1) << endl;
    cout << "Координатная четверть второй точки: " << Quarter(x2, y2) << endl;
    cout << "Координатная четверть третьей точки: " << Quarter(x3, y3) << endl;
    //Задание 5
    cout << "Задание 5" << endl;
    int k;
    cout << "Введите число: ";
    cin >> k;
    cout << "Двойной факториал числа: " << Fact2(k) << endl;
}