#include <iostream>
#include <vector> //не уверен, что это нужно

using namespace std;

int main()
{
	setlocale(0, "Russian");
	//Задание 1
	cout << "Задание 1" << endl;
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	int* a = new int[n];
	int c = 1;
	for (int i = 0; i < n; i++) {
		a[i] = c;
		c += 2;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	//Задание 2
	cout << "Задание 2" << endl;
	int n1, a1, d1;
	cout << "Введите размер массива: ";
	cin >> n1;
	cout << "Введите первый член прогрессии: ";
	cin >> a1;
	cout << "Введите знаменатель прогрессии: ";
	cin >> d1;
	int* b = new int[n1];
	for (int i = 0; i < n1; i++) {
		int c1 = 1;
		for (int j = 0; j < i; j++) {
			c1 *= d1;
		}
		b[i] = a1 * c1;
	}
	for (int i = 0; i < n1; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	//Задание 3
	cout << "Задание 3" << endl;
	int n2, a2, b2;
	cout << "Введите размер массива: ";
	cin >> n2;
	cout << "Введите число A: ";
	cin >> a2;
	cout << "Введите число B: ";
	cin >> b2;
	int* c2 = new int[n2];
	c2[0] = a2;
	c2[1] = b2;
	for (int i = 2; i < n2; i++) {
		c2[i] = c2[i - 1] + c2[i - 2];
	}
	for (int i = 0; i < n2; i++) {
		cout << c2[i] << " ";
	}
	cout << endl;
	//Задание 4
	cout << "Задание 4" << endl;
	int n3;
	cout << "Введите размер массива: ";
	cin >> n3;
	int* c3 = new int[n3];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n3; i++) {
		cin >> c3[i];
	}
	for (int i = 0, j = n3 - 1; i < j; i++, j--) {
		cout << c3[i] << " " << c3[j] << " ";
	}
	if (n3 % 2 != 0) {
		cout << c3[n3 / 2];
	}
	cout << endl;
	//Задание 5
	cout << "Задание 5" << endl;
	int n4;
	cout << "Введите размер массива: ";
	cin >> n4;
	int* c4 = new int[n4];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n4; i++) {
		cin >> c4[i];
	}
	for (int i = 0; i < n4; i++) {
		if (i % 2 == 1) {
			cout << c4[i] << " ";
		}
	}
	for (int i = n4 - 1; i >= 0; i--) {
		if (i % 2 == 0) {
			cout << c4[i] << " ";
		}
	}
}