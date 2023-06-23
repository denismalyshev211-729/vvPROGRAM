#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");
    int number;
    for (int i = 0; i > -1;){ 
        cout << endl << endl << "Введите номер задания(1-5): ";
        cin >> number;
        switch (number) {
        case 1:
            int x1, x2, y1, y2;
            float res;
            cout << "Введите координату первой точки: " << endl << "X1 = ";
            cin >> x1;
            cout << "Y1 = ";
            cin >> y1;

            cout << endl << "Введите координату второй точки: " << endl << "X2 = ";
            cin >> x2;
            cout << "Y2 = ";
            cin >> y2;

            res = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
            cout << "Расстояние: " << res;
            break;
        case 2:
            float a, b, c, ac, bc, sum;
            cout << "Введите точки:" << endl << "A ";
            cin >> a;
            cout << "B ";
            cin >> b;
            cout << "C ";
            cin >> c;

            ac = c - a;
            bc = c - b;
            sum = ac + bc;
            cout << endl << "Сумма: " << sum;
            break;
        case 3:
            int pr,a1,b1,c1,ac1,bc1;
            cout << "Введите точки:" << endl << "A ";
            cin >> a1;
            cout << "B ";
            cin >> b1;
            cout << "C ";
            cin >> c1;
            if (c1<a1 || c1>b1) {
                for (int i = 0; i < 1;) {
                    
                    cout << "Точка С находится между точками А и В. Попробуйте ввести заново." << endl <<"A ";
                    cin >> a1;
                    cout << "B ";
                    cin >> b1;
                    cout << "C ";
                    cin >> c1;
                    if (c1<a1 || c1>b1) {
                        i = 0;
                    }
                    else i++;
                }
            }

            ac1 = c1 - a1;
            bc1 = b1 - c1;
            pr = ac1 * bc1;
            cout << endl << "Произведение: " << pr;
            break;
            case 4:
                int x3, x4, y3, y4;
                float fst, sst, per,pl;
                cout << "Введите координату первой вершины: " << endl << "X1 = ";
                cin >> x3;
                cout << "Y1 = ";
                cin >> y3;

                cout << endl << "Введите координату второй вершины: " << endl << "X2 = ";
                cin >> x4;
                cout << "Y2 = ";
                cin >> y4;
                fst = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
                sst = sqrt(pow((x3 - x4), 2) + pow((y3 - y4), 2));
                per = 2 * (fst + sst);
                pl = fst * sst;
                cout << endl << "Площадь: " << pl << endl << "Периметр: " << per;
                break;
            case 5:

                float tst;
                cout << "Введите координату первой вершины: " << endl << "X1 = ";
                cin >> x1;
                cout << "Y1 = ";
                cin >> y1;

                cout << endl << "Введите координату второй вершины: " << endl << "X2 = ";
                cin >> x2;
                cout << "Y2 = ";
                cin >> y2;

                 cout << endl << "Введите координату третьей вершины: " << endl << "X3 = ";
                cin >> x3;
                cout << "Y3 = ";
                cin >> y3;
                fst = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
                sst = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
                tst = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
                per = fst + sst + tst;
                pl = (1 / 2) * abs(((x2 - x1) * (y3 - y1)) - ((x3 - x1) * (y2 - y2)));
                float pol = per / 2;
                pl = sqrt(pol * (pol - fst) * (pol - sst) * (pol - tst));
                cout << endl << "Периметр: " << per << endl << "Площадь: " << pl;
        }
    }
}

