#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");// ��� �� ������ �������� ������� � cout
	int n;
	int e = 0;
	cout << "������� ������ �������    ";
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