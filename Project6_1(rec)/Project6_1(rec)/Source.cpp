#include <iostream>
#include <iomanip>

using namespace std;

void Create(int* p, const int size, const int Low, const int High, int i) // Створення масиву елементів в діапазоні
{
	p[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(p, size, Low, High, i + 1);
}

void Print(int* p, const int size, int i) // Виведення елементів масиву
{
	cout << setw(4) << p[i];
	if (i < size - 1)
		Print(p, size, i + 1);
	else
		cout << endl;
}

int CalcSum(int* p, const int n, int& count, int i, int S) // Обчислення суми та к-сті
{
	if (!(p[i] % 2 == 0) && i % 13 == 0)
	{
		count++;
		S += p[i];
	}

	if (i < n - 1)
		return CalcSum(p, n, count, i + 1, S);
	else
		return S;
}

int CalcZero(int* p, const int n, int i) // Заміна на нулі
{
	if (!(p[i] % 2 == 0) && i % 13 == 0)
		p[i] = 0;

	if (i < n - 1)
		return CalcZero(p, n, i + 1);
}

int main()
{
	const int n = 25;
	int p[n];
	int Low = 15;
	int High = 94;
	int c = 0;

	Create(p, n, Low, High, 0);
	Print(p, n, 0);

	cout << "Summ = " << CalcSum(p, n, c, 0, 0) << "\n Count = " << c << endl;

	cout << "Modified: " << endl;
	CalcZero(p, n, 0);

	Print(p, n, 0);

	return 0;
}
