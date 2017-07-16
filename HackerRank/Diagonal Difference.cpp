#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n][n], first = 0, second = 0, difference = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int a = 0; a <= n - 1; a++)
	{
		for (int b = 0; b <= n - 1; b++)
		{
			if (a == b)
			{
				first += arr[a][b];
			}
			if (b == (n - a - 1))
			{
				second += arr[a][b];
			}
		}
	}
	difference = first - second;
	difference = abs(difference);
	cout << difference;
	return 0;
}