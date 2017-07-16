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
		for (int j = 0; j <= n - i - 2; j++)
		{
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << "#";
		}
		cout << "\n";
	}
	return 0;
}