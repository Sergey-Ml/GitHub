#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, chislo=1, finish, proverka;
	cout << "Введите число до которого нужно вывести ряд простых чисел" << endl;
	cin >> finish;
	cout << "Простые числа:  ";
	while ( chislo <= finish)
	{
		proverka = 0;
		for (i = 2; i <= chislo / 2; i++)
		{
			if (chislo % i == 0)
			{
				proverka = 1;
				break;
			}
		}
			if (proverka == 0)
				cout << chislo << " ";
			++chislo;
	}
}
