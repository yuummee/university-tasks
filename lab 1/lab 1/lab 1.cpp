#include <iostream>
using namespace std;
void func(int* a, int n, int* pmax, int* pj)
{
	*pmax = *a;
	*pj = 0;
	for (int i = 0; i < n; i++)
	{
		if (*pmax < *(a + i))
		{
			*pmax = *(a + i);
			*pj = i;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 4;
	int x[n], y[n], z[n], max, max_x, max_y, max_z, j, maxj_x, maxj_y, maxj_z;
	for (int i = 0; i < n; i++)
	{
		cout << "x[" << i << "]=";
		cin >> *(x + i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << "y[" << i << "]=";
		cin >> *(y + i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << "z[" << i << "]=";
		cin >> *(z + i);
	}
	func(x, n, &max, &j);
	max_x = max;
	maxj_x = j;
	cout << "Наибольший элемент вектора x=" << max_x << ". " << "Порядковый номер=" << maxj_x << "." << endl;
	func(y, n, &max, &j);
	max_y = max;
	maxj_y = j;
	cout << "Наибольший элемент вектора y=" << max_y << ". " << "Порядковый номер=" << maxj_y << "." << endl;
	func(z, n, &max, &j);
	max_z = max;
	maxj_z = j;
	cout << "Наибольший элемент вектора z=" << max_z << ". " << "Порядковый номер=" << maxj_z << "." << endl;
	if ((max_x < 0) && (maxj_x < n / 2) && (max_y == 10))
	{
		for (int i = 0; i < maxj_z; i++)
		{
			*(z + i) = (*(z + i)) * (*(z + i));
			cout << "z[" << i << "]=" << *(z + i) << endl;
		}
	}
	system("pause");
}