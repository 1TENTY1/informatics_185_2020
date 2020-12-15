#include <iostream>

using namespace std;

int main()
{
	int a[4][5];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a[i][j] = rand() % 100;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	int res[4];
	for (int i = 0; i < 4; i++)
	{
		double sum = 0;
		for (int j = 0; j < 5; j++)
		{
			sum += a[i][j];
		}
		sum /= 5;
		res[i] = sum;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << res[i];
	}
	return 0;
}