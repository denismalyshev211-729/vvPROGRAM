#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


int main()
{
	setlocale(0, "");
	for (int i = 0; i > -1;)
	{
		int nu;
		cout << "Введите номер задания(1-6): ";
		cin >> nu;
		switch (nu) {
		case 1:
			float a;
			float pi;
			cout << "Введите значение угла а (0 < a < 360): ";
			cin >> a;
			pi = a / 180;
			cout << endl << "Угол равен " << pi << "п радианов." << endl;
			break;
		case 2:
			cout << "Введите значение угла а (0 < a < 2n): ";
			cin >> pi;
			a = pi * 180;
			cout << endl << "Угол равен " << a << "°." << endl;
			break;
		case 3:
			int k, c, my;
			cout << "Введите количество конфет в килограммах: ";
			cin >> k;
			cout << "Введите стоимость: ";
			cin >> c;
			cout << endl << endl << "1 кг стоит " << c / k << "рублей." << endl << endl << "Сколько килограмм конфет вы хотите купить? ";
			cin >> my;
			cout << endl << endl << my << "кг стоит " << my * (c/k) << "рублей.";
			break;
		case 4:
			int v1, v2, s, t;
			cout << endl << "Введите скорость первого автомобиля: ";
			cin >> v1;
			cout << "Введите скорость второго автомобиля: ";
			cin >> v2;
			cout << "Введите пройденное время: ";
			cin >> t;
			s = (v1 + v2) * t;
			cout << endl << endl << "Расстояние = " << s << "км.";
			break;
		case 5:
			cout << endl << "Линейное уравнение А*х + В = 0. \nВведите коэффициент А: ";
			float ka, kb, x;
			
			for (int i = 0; i < 1;)
			{
				cin >> ka;
				if (ka == 0) {
					cout << "Коэффициент А не может быть равен нулю. Попробуйте снова." << endl;
					cout << "Введите коэффициент А: ";
					cin >> ka;
				}
				else i++;
			}
			cout << "Введите коэффициент В: ";
			cin >> kb;
			x = -kb / ka;
			cout << endl << "X = " << x << endl;
			break;
		case 6:
			double a1, a2, b1, b2, c1, c2;
			cout << "Введите коэффициент A1: ";
			cin >> a1;
			cout << "Введите коэффициент B1: ";
			cin >> b1;
			cout << "Введите коэффициент C1: ";
			cin >> c1;
			cout << "Введите коэффициент A2: ";
			cin >> a2;
			cout << "Введите коэффициент B2: ";
			cin >> b2;
			cout << "Введите коэффициент C2: ";
			cin >> c2;
			double x1 = (c2 * b1 - c1 * b2) / (a2 * b1 - a1 * b2);
			double y1 = (c1 - a1 * x1) / b1;
			cout << "Корень системы X: " << x1 << endl;
			cout << "Корень системы Y: " << y1 << endl;
			break;
		}
		cout << endl << endl;
	}
}


