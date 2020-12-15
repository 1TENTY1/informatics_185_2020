#include <iostream>

using namespace std;

void Show(int** a, int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void Change(int** a, int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = col; j >i ; j--)
		{
			a[i][j] *= 2;
		}
	}
}

int main()
{
	int col, row;
	cin >> row >> col;
	int** a = new int* [row];
	for (int i = 0; i < row; i++)
	{
		a[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
	Show(a, col, row);
	Change(a, col, row);
	Show(a, col, row);
}