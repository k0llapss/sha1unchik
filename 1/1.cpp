#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");// что бы писать пусскими буквами в cout
	int n;
	int e = 0;
	cout << "введите размер массива    ";
	cin >> n;
	int *x = new int[n];
	for (int i = 0;i<n;i++)
	{
		if (i == 0 || i == n - 1)
		{
			x[i] = 1;
		}
		else
		{
			x[i] = 0;
		}
	}
	for (int i = 0;i<n;i++)
	{
		cout << x[i] << "\n";
	}
	system("pause");
	return 0;
}