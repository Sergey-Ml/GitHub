#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, chislo=1, finish, proverka;
	cout << "������� ����� �� �������� ����� ������� ��� ������� �����" << endl;
	cin >> finish;
	cout << "������� �����:  ";
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
