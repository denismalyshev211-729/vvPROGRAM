#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;



int main()
{
    setlocale(0, "");
    for (int i = 0; i < 1;) {
        int number;
        cout << "Введите номер задания(1 - 5): ";
        cin >> number;
        switch (number) {
        case 1:
            int by;
            cout << endl << "Введите размер файла(в байтах): ";
            cin >> by; 
            cout << "Количество полных килобайт, которые занимает файл >> " << by / 1024 << endl;
            break;
        case 2:
            int a, b;
            for (int i = 0; i < 1;) {
                cout << endl << "Введите целые положительные числа А и В: ";
                cin >> a >> b;
                if (a < b) {
                    cout << endl << "ЧИСЛО А ДОЛЖНО БЫТЬ БОЛЬШЕ В!!!! ПОВТОРИТЕ ПОПЫТКУ!!!" << endl;
                }
                else i++;
            }
            cout << endl << "На отрезке А размещено " << a / b << " отрезков В." << endl;
            break;
        case 3:
            for (int i = 0; i < 1;) {
                cout << endl << "Введите целые положительные числа А и В: ";
                cin >> a >> b;
                if (a < b) {
                    cout << endl << "ЧИСЛО А ДОЛЖНО БЫТЬ БОЛЬШЕ В!!!! ПОВТОРИТЕ ПОПЫТКУ!!!" << endl;
                }
                else i++;
            }
            cout << endl << "Длина незанятой части равна " << a%(a / b) << "." << endl;
            break;
        case 4:
            int ch;
            for (int i = 0; i < 1;)
            {
                cout << "Введите двухзначное число: ";
                cin >> ch;
                if (ch > 99) {

                }
                else i++;
            }
            a = ch / 10;
            b = ch % 10;
            cout << endl  << "Полученное при перестановке цифр число: " << (b * 10) + a << endl;
            break;
        case 5:
            int c; 
            for (int i = 0; i < 1;)
            {
                cout << "Введите трехзначное число: ";
                cin >> ch;
                if (ch > 999 && ch < 100) {

                }
                else i++;
            }
            a = ch / 100;
            b = (ch % 100)/10;
            c = ch % 100 % 10;
            cout << endl << "Полученное при перестановке цифр число: " << (c * 100)+(b*10) + a << endl;
            break;
        }
        cout << endl << endl;
    }
}

