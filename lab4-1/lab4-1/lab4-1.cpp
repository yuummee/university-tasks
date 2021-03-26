#include <iostream>
#include <ctime>
using namespace std;
double comp(int* x, int n)
{
	int Y = 1;
	for (int i = 0; i < n; i++)
	{
		if ((*(x + i) % 2) == 0)
		{
			Y = Y * (*(x + i));
		}
	}
	return Y;
}
double count(int* x, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if ((*(x + i) % 2) != 0)
		{
			k++;
		}
	}
	return k;
}
double aver(int* x, int n)
{
	double S = 0, k = 0, Sr = 0;
	for (int i = 0; i < n; i++)
	{
		S += *(x + i);
	}
	Sr = S / n;
	return Sr;
}
double analiz(int* op1, int op2, double(*func)(int*, int))
{
	return func(op1, op2);
}
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	const int n = 5;
	int x[n];
	for (int i = 0; i < n; i++)
	{
		*(x + i) = rand() % 10;
		cout << "x[" << i << "]=" << *(x + i) << endl;
	}
	cout << "Произведение четных эл-ов =" << analiz(x, n, comp) << endl;
	cout << "Кол-во нечетных эл-ов =" << analiz(x, n, count) << endl;
	cout << "Среднее арифметическое эл-ов=" << analiz(x, n, aver) << endl;
	system("pause");
}