#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* p, const int size, const int Low, const int High, int i)
{
	p[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(p, size, Low, High, i + 1);
}

void Print(int* p, const int size, int i)
{
	cout << setw(4) << p[i];
	if (i < size - 1)
		Print(p, size, i + 1);
	else
		cout << endl;
}

int Sum(int* p, const int size, int i, int S, int& count)
{
	if (p[i] % 2 == 0 || i % 2 == 0)
	{
		S += p[i];
		count++;
		p[i] = 0;
	
	}
	if (i < size - 1)
		return Sum(p, size, i + 1, S, count);
	else
		return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 24;

	int p[n];

	int Low = -10;
	int High = 14;

	Create(p, n, Low, High, 0);

	Print(p, n, 0);


	int count = 0;

	cout << "Sum = " << Sum(p, n, 0, 0, count) << endl;
	cout << "Count = " << count << endl;

	Print(p, n, 0);

	return 0;
}
