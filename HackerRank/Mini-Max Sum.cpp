#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long int arr[5], s[5], addition, max, min;
	for (int i = 0; i <= 4; i++)
	{
		cin >> arr[i];
	}
	for (int j = 0; j <= 4; j++)
	{
		addition = 0;
		for (int k = 0; k <= 4; k++)
		{
			if (k != j)
			{
				addition += arr[k];
			}
		}
		s[j] = addition;
	}
	max = s[0];
	min = s[0];
	for (int a = 1; a <= 4; a++)
	{
		if (s[a] > max)
		{
			max = s[a];
		}
		if (s[a] < min)
		{
			min = s[a];
		}
	}
	cout << min << " " << max;
	return 0;
}