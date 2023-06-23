#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "");
    for (int i = 0; i < 1;)
    {
        int number;
        cout << "Введите номер задания(1 - 5): ";
        cin >> number;
        switch (number) {
        case 1:
            int d, m;
            cout << "Введите номер дня: ";
            cin >> d;
            cout << "Введите номер месяца: ";
            cin >> m;
            {string days[] = { "Первое ", "Второе ", "Третье ", "Четвертое ", "Пятое ", "Шестое ", "Седьмое ", "Восьмое ",
                            "Девятое ", "Десятое ","Одиннадцатое ", "Двенадцатое ", "Тринадцатое ", "Четырнадцатое ", "Пятнадцатое ",
                            "Шестнадцатое ", "Семнадцатое ", "Восемнадцатое ", "Девятнадцатое ", "Двадцатое ", "Двадцать первое ",
                            "Двадцать второе ", "Двадцать третье ", "Двадцать четвертое ", "Двадцать пятое ", "Двадцать шестое ", "Двадцать седьмое ", "Двадцать восьмое ", "Двадцать девятое ", "Тридцатое ", "Тридцать первое " };

            string months[] = { "января", "февраля", "марта", "апреля", "мая", "июня", "июля", "августа", "сентября",
                               "октября", "ноября", "декабря" };
            cout << days[d - 1] << months[m - 1] << endl; }
            break;
        case 2:
        {string dir;
        int n;
        cout << "Введите начальное направление (N - север, S - юг, W - запад, E - восток): ";
        cin >> dir;
        cout << "Введите команду: ";
        cin >> n;
        if (n != 0) {
            cout << dir << endl;
            if ((dir == "N" && n == 1) || (dir == "S" && n == -1)) {
                cout << "Направление робота после выполнения команды: W" << endl;
            }
            else if ((dir == "N" && n == -1) || (dir == "S" && n == 1)) {
                cout << "Направление робота после выполнения команды: E" << endl;
            }
            else if ((dir == "W" && n == 1) || (dir == "E" && n == -1)) {
                cout << "Направление робота после выполнения команды: S" << endl;
            }
            else if ((dir == "W" && n == -1) || (dir == "E" && n == 1)) {
                cout << "Направление робота после выполнения команды: N" << endl;
            }
        }
        else {
            cout << "Направление робота после выполнения команды: " << dir << endl;
        }}
        break;
        case 3:
        {int c;
        cout << "Введите количество учебных заданий: ";
        cin >> c;
        string task[] = { " учебное задание", " учебных задания", " учебных заданий" };
        string nums[] = { "Десять", "Одиннадцать", "Двенадцать","Тринадцать","Четырнадцать","Пятнадцать","Шестнадцать","Семнадцать", "Восемнадцать",
                    "Девятнадцать", "Двадцать", "Двадцать одно", "Двадцать два", "Двадцать три", "Двадцать четыре", "Двадцать пять", "Двадцать шесть", "Двадцать семь", "Двадцать восемь", "Двадцать девять", "Тридцать", "Тридцать одно",
                    "Тридцать два", "Тридцать три", "Тридцать четыре", "Тридцать пять", "Тридцать шесть", "Тридцать семь",
                    "Тридцать восемь", "Тридцать девять", "Сорок" };
        cout << nums[c - 10];
        if (c < 21 || (c > 24 && c < 31) || c > 34) {
            cout << task[2] << endl;
        }
        else if (c == 21 || c == 31) {
            cout << task[0] << endl;
        }
        else {
            cout << task[1] << endl;
        }}
        break;
        case 4:
            int c1;
            cout << "Введите число: ";
            cin >> c1;
            switch (c1 / 100) {
            case 1:
                printf("Сто ");
                break;
            case 2:
                printf("Двести ");
                break;
            case 3:
                printf("Триста ");
                break;
            case 4:
                printf("Четыреста ");
                break;
            case 5:
                printf("Пятьсот ");
                break;
            case 6:
                printf("Шестьсот ");
                break;
            case 7:
                printf("Семьсот ");
                break;
            case 8:
                printf("Восемьсот ");
                break;
            case 9:
                printf("Девятьсот ");
                break;
            }
            if ((c1 % 100) / 10 == 1)
                switch (c1 % 100) {
                case 10:
                    printf("десять");
                    break;
                case 11:
                    printf("одинадцать");
                    break;
                case 12:
                    printf("двенадцать");
                    break;
                case 13:
                    printf("тринадцать");
                    break;
                case 14:
                    printf("четырнадцать");
                    break;
                case 15:
                    printf("пятнадцать");
                    break;
                case 16:
                    printf("шестнадцать");
                    break;
                case 17:
                    printf("семнадцать");
                    break;
                case 18:
                    printf("восемнадцать");
                    break;
                case 19:
                    printf("девятнадцать");
                    break;
                }
            else {
                switch ((c1 % 100) / 10) {
                case 2:
                    printf("двадцать ");
                    break;
                case 3:
                    printf("тридцать ");
                    break;
                case 4:
                    printf("сорок ");
                    break;
                case 5:
                    printf("пятьдесят ");
                    break;
                case 6:
                    printf("шестьдесят ");
                    break;
                case 7:
                    printf("семьдесят ");
                    break;
                case 8:
                    printf("восемьдесят ");
                    break;
                case 9:
                    printf("девяносто ");
                    break;
                }
                switch (c1 % 10) {
                case 1:
                    printf("один");
                    break;
                case 2:
                    printf("два");
                    break;
                case 3:
                    printf("три");
                    break;
                case 4:
                    printf("четыре");
                    break;
                case 5:
                    printf("пять");
                    break;
                case 6:
                    printf("шесть");
                    break;
                case 7:
                    printf("семь");
                    break;
                case 8:
                    printf("восемь");
                    break;
                case 9:
                    printf("девять");
                    break;
                }
            }
            cout << endl;
            break;
        case 5:
            int c2;
            cout << "Введите год: ";
            cin >> c2;
            printf("Год ");
            switch ((c2) % 10) {
            case 0:
            case 1:
                printf("бел");
                break;
            case 2:
            case 3:
                printf("черн");
                break;
            case 4:
            case 5:
                printf("зелён");
                break;
            case 6:
            case 7:
                printf("красн");
                break;
            case 8:
            case 9:
                printf("жёлт");
                break;
            }
            switch ((c2 + 1) % 5) {
            case 0:
            case 1:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                printf("ой ");
                break;
            case 2:
            case 3:
            case 4:
                printf("ого ");
                break;
            }
            switch ((c2 + 8) % 12) {
            case 0:
                printf("крысы\n");
                break;
            case 1:
                printf("коровы\n");
                break;
            case 2:
                printf("тигра\n");
                break;
            case 3:
                printf("зайца\n");
                break;
            case 4:
                printf("дракона\n");
                break;
            case 5:
                printf("змеи\n");
                break;
            case 6:
                printf("лошади\n");
                break;
            case 7:
                printf("овцы\n");
                break;
            case 8:
                printf("обезьяны\n");
                break;
            case 9:
                printf("курицы\n");
                break;
            case 10:
                printf("собаки\n");
                break;
            case 11:
                printf("свиньи\n");
                break;
            }
        
            break;
        }
    }
}

