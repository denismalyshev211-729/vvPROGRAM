#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0,"");
    for (int i = 0; i > -1;){
        cout << "Введите номер задания к которому хотите приступить(1-7): ";
        int mu;
        cin >> mu;
        switch (mu) {
        case 1:
            int a, b, t;
            cout <<endl<< "Введите А: ";
            cin >> a;
            cout << "Введите B: ";
            cin >> b;
            t = a;
            a = b;
            b = t;
            cout << endl << "Значение А = " << a << endl << "Значение В = " << b << endl;
            break;
        case 2:
            int c;
            cout<<endl << "Введите А: ";
            cin >> a;
            cout << "Введите B: ";
            cin >> b;
            cout << "Введите C: ";
            cin >> c;
            t = a;
            a = c;
            c = b; 
            b = t;
            cout << endl << "Значение А = " << a << endl << "Значение В = " << b << endl << "Значение C = " << c <<endl;
            break;
        case 3:
            cout << endl << "Введите А: ";
            cin >> a;
            cout << "Введите B: ";
            cin >> b;
            cout << "Введите C: ";
            cin >> c;
            t = a;
            a = b;
            b = c;
            c = t;
            cout << endl << "Значение А = " << a << endl << "Значение В = " << b << endl << "Значение C = " << c << endl;
            break;
        case 4:
            int x, y;
            cout << endl << "Введите значение Х: ";
            cin >> x;
            y = (3 * pow(x, 6)) - (6 * pow(x, 2)) - 7;
            cout << endl << "Значение У = " << y << endl;
            break;
        case 5:
            cout << endl << "Введите значение Х: ";
            cin >> x;
            y = (4*pow(x-3,6)) - (7*pow(x-3,3))+2;
            cout << endl << "Значение У = " << y << endl;
            break;
        case 6:
            int a3,a8;
            cout << endl << "Введите значение А: ";
            cin >> a;
            a3 = pow(a, 3);
            a8 = a3 * a3 * a * a;
            cout << endl << "Значение А^8 = " << a8 << endl;
            break;
        case 7:
            int a2,a15;
            cout << endl << "Введите значение А: ";
            cin >> a;
            a2 = pow(a, 2);
            a3 = pow(a, 3);
            a15 = a2 * a2 * a2 * a3 * a3 * a3;
            cout << endl << "Значение А^15 = " << a15 << endl;
            break;
        }
        cout << endl;
    }
    
}
