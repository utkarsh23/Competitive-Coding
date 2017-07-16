#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> arr[i];
	}
	for (int j = 0; j <= n - 1; j++)
	{
		sum = sum + arr[j];
	}
	cout << sum;
	return 0;
}