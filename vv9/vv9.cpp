#include <iostream>
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
            int sec;
            cout << "Введите количество секунд прошедших с начала суток: ";
            cin >> sec;
            cout << "С начала последней минуты прошло " << sec % 60 << " секунд." << endl;
            break;
        case 2:
            int k,n, now;
            cout << endl << "Введите количество дней прошедших в этом году: ";
            cin >> k;
            if (k < 7 && k > 0) {
                now = k;
            }
            else now = k % 7;
            switch (now) {
            case 0:
                cout <<endl << "Сейчас понедельник." << endl;
                break;
            case 1:
                cout <<endl<< "Cейчас вторник." << endl;
                break;
            case 2:
                cout <<endl<< "Cейчас среда." << endl;
                break;
            case 3:
                cout <<endl<< "Cейчас четверг." << endl;
                break;
            case 4:
                cout <<endl<< "Cейчас пятница." << endl;
                break;
            case 5:
                cout <<endl<< "Cейчас суббота." << endl;
                break;
            case 6:
                cout <<endl<< "Cейчас воскресенье." << endl;
                break;
            }
            break;
        case 3:
            cout << endl << "Введите количество дней прошедших в этом году: ";
            cin >> k;
            cout << endl << "Укажите с какого дня недели начался год(1 - понедельник, 2 -вторник, 3 -среда, 4 -четверг, 5 - пятница, 6 - суббота, 7 - воскресенье): ";
            cin >> n;
            
            now = k + n -1;
            int now2;
            if (now > 7) {
                now2 = now % 7;
            }
            else now2 = now;

            switch (now2) {
            case 0:
                cout << endl << "Сейчас понедельник." << endl;
                break;
            case 1:
                cout << endl << "Cейчас вторник." << endl;
                break;
            case 2:
                cout << endl << "Cейчас среда." << endl;
                break;
            case 3:
                cout << endl << "Cейчас четверг." << endl;
                break;
            case 4:
                cout << endl << "Cейчас пятница." << endl;
                break;
            case 5:
                cout << endl << "Cейчас суббота." << endl;
                break;
            case 6:
                cout << endl << "Cейчас воскресенье." << endl;
                break;
            }
            break;
        case 4:
            int a3, b3, c3,resu;
            cout <<endl<< "Введите положительное число А: ";
            cin >> a3;
            cout << "Введите положительное число B: ";
            cin >> b3;
            cout << "Введите положительное число C: ";
            cin >> c3;
            resu = (a3 * b3) / (c3 * c3);
            cout << endl << "В прямоугольнике А*В помещается " << resu << " квадратов со стороной С." << endl;
            break;
        case 5:
            int year;
            cout << endl << "Введите год: ";
            cin >> year;
            if (year % 100 <= 0) {
                cout << endl << "Сейчас " << year / 100 << " век." << endl;
            }else cout << endl << "Сейчас " << (year / 100)+1 << " век." << endl;
            break;
        }
        cout << endl << endl;
    }
}

