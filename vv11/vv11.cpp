#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    for (int i = 0; i < 1;) {
        int number;
        cout << "Введите номер задания(1 - 6): ";
        cin >> number;
        switch (number) {
        case 1:
            int a, b;
            int max;
            cout << endl << "Введите переменную А: ";
            cin >> a;
            cout << endl << "Введите переменную B: ";
            cin >> b;
            if (a != b) {
                if (a > b) {
                    max = a;
                }
                else max = b;
                a = max;
                b = max;
            }
            else {
                a = 0;
                b = 0;
            }

            cout << endl << "A = " << a << endl << "B = " << b << endl;
            break;
        case 2:
            int c;
            int max2;
            cout << endl << "Введите А: ";
            cin >> a;
            cout << endl << "Введитe B: ";
            cin >> b;
            cout << endl << "Введите C: ";
            cin >> c;
            if (a > b && a > c){
                max = a;
                if (b > c)
                {
                    max2 = b;
                }
                else max2 = c;
            }
                
            else if (b > a && b > c) {
                max = b;
                if (a > c)
                {
                    max2 = a;
                }
                else max2 = c;
            }
               
            else if (c > a && c > b) {
                max = c;
                if (a > b)
                {
                    max2 = a;
                }
                else max2 = b;
            }
            int sim;
            sim = max + max2;
            cout << endl << "Сумма равна " << sim << endl;
            break;
        case 3:
            int ab, ac;
            cout << endl << "Точка А -> ";
            cin >> a;
            cout << endl << "Точка B -> ";
            cin >> b;
            cout << endl << "Точка C: -> ";
            cin >> c;
            if (b < a && c < a) {
                ab = a - b;
                ac = a - c;
                if (ab > ac)
                {
                    cout<< endl << "Ближе точка С. Расстояние " << ac << endl;
                }else cout << endl << "Ближе точка B. Расстояние " << ab << endl;
            }else  if (b < a && c > a) {
                ab = a - b;
                ac = c - a;
                if (ab > ac)
                {
                    cout << endl << "Ближе точка С. Расстояние " << ac << endl;
                }
                else cout << endl << "Ближе точка B. Расстояние " << ab << endl;
            }else  if (b > a && c < a) {
                ab = b -a;
                ac = a - c;
                if (ab > ac)
                {
                    cout << endl << "Ближе точка С. Расстояние " << ac << endl;
                }
                else cout << endl << "Ближе точка B. Расстояние " << ab << endl;
            }
            else {
                ac = c - a;
                ab = b - a;
                if (ab > ac)
                {
                    cout << endl << "Ближе точка С. Расстояние " << ac << endl;
                }
                else cout << endl << "Ближе точка B. Расстояние " << ab << endl;
            }
            break;
        case 4:
            int x, y;
            cout << endl << "X -> ";
            cin >> x;
            cout << endl << "Y -> ";
            cin >> y;
            if (x > 0 && y > 0) {
                cout << endl << "Первая четверть." << endl;
            }
            else if (x < 0 && y > 0) {
                cout << endl << "Вторая четверть." << endl;
            }
            else if (x < 0 && y < 0) {
                cout << endl << "Третья четверть." << endl;
            }
            else if (x > 0 && y < 0) {
                cout << endl << "Четвертая четверть." << endl;
            }
            break;
        case 5:
            cout << endl << "Введите целое число -> ";
            cin >> a;
            if (a % 2 == 0) {
                if (a > 0) {
                    cout << endl << "Четное положительное число." << endl;
                }
                else if (a < 0)
                {
                    cout << endl << "Четное отрицательное число." << endl;
                }
            }
            else if (a % 2 == 1 || a == 1 || a == -1 || a % 2 == -1) {
                if (a > 0) {
                    cout << endl << "Нечетное положительное число." << endl;
                }
                else if(a<0)
                {
                    cout << endl << "Нечетное отрицательное число." << endl;
                }
            }
            else if (a == 0)
            {
                cout << endl << "Нулевое число." << endl;
            }
            break;
        case 6:
            for (int i = 0; i < 1;) {
                cout << endl << "Введите число(1 - 999): ";
                cin >> a;
                if (a > 999 || a < 1) {

                }
                else i++;
                
            }
            
            if (a%2==0)
            {
                cout<<endl << "Четное";
                if (a < 10)
                    cout << " число." << endl;
                else if (a > 9 && a < 100)
                    cout << " двузначное число." << endl;
                else if (a > 99 && a < 1000)
                    cout << " трехзначное число." << endl;
            }
            else if (a % 2 == 1 || a == 1)
            {
                cout << endl << "Нечетное";
                if (a < 10)
                    cout << " число." << endl;
                else if (a > 9 && a < 100)
                    cout << " двузначное число." << endl;
                else if (a > 99 && a < 1000)
                    cout << " трехзначное число." << endl;
            }
            break;
        }
        cout << endl << endl;
    }
}

