#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long int n;
	cin >> n;
	long int arr[n], max, count = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> arr[i];
	}
	max = arr[0];
	for (int j = 1; j <= n - 1; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
	}
	for (int k = 0; k <= n - 1; k++)
	{
		if (max == arr[k])
		{
			count++;
		}
	}
	cout << count;
	return 0;
}