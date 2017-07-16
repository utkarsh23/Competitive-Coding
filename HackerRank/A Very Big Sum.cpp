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
	long int arr[n], sum = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> arr[i];
	}
	for (int j = 0; j <= n - 1; j++)
	{
		sum += arr[j];
	}
	cout << sum;
	return 0;
}