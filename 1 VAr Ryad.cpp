#include <iostream>
#include <cmath>

using namespace std;

int findSum(int k)
{
	int res = 0;
	for (int i = 0; i < k; i++)
	{
		res = pow(-1, i + 1) + pow(i + 1, i - 1);
	}
	return res;
}

int main()
{
	int k;
	cin >> k;
	cout << findSum(k);
}