#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int Create(int* p, const int size, const int Low, const int High) // Генерує випадкові числа в діапазоні
{
	for (int i = 0; i < size; i++)
		p[i] = Low + rand() % (High - Low + 1);
	return 0;
}

void Print(int* p, const int size) // Виводить массив
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << p[i];
	cout << endl;
}

int CalcSum(int *p, const int n, int &count) // Обчислює суму та к-сть
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (!(p[i] % 2 == 0) && i % 13 == 0)
		{
			count++;
			sum += p[i];
		}
	}
	return sum;
}

int CalcZero(int* p, const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (!(p[i] % 2 == 0) && i % 13 == 0)
			p[i] = 0;
	}
	return 0;
}

int main()
{
	const int n = 25;
	int p[n];
	int Low = 15;
	int High = 94;
	int c = 0;

	Create(p, n, Low, High);
	Print(p, n);
	cout << endl;

	cout << "Summ = " << CalcSum(p, n, c)<< "\n Count = " << c << endl;

	CalcZero(p, n);
	Print(p, n);

	return 0;
}
