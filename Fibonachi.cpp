#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, n, num1 = 0, num2 = 1, num3;
	cout << "Введите кол-во цифр последовательности Фибоначи" << endl;
	cin >> n ;
	cout << "Последовательность Фибоначи: 0 1 ";
	for (i = 1; i <= n; i++) {
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		cout << num3 << " ";
	}
	cout << " \n" << endl;
}