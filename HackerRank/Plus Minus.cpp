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
	float arr[n], positive  = 0.0, negative = 0.0, zeros = 0.0, first = 0.0, second = 0.0, third = 0.0;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> arr[i];
	}
	for (int a = 0; a <= n - 1; a++)
	{
		if (arr[a] > 0.0)
		{
			positive += 1.0;
		}
		else if (arr[a] < 0.0)
		{
			negative += 1.0;
		}
		else
		{
			zeros += 1.0;
		}
	}
	first = positive / n;
	second = negative / n;
	third = zeros / n;
	cout << first << "\n" << second << "\n" << third;
	return 0;
}