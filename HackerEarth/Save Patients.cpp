#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cstdio>
 
using namespace std;
 
int main()
{
	long int n;
	cin >> n;
	long int arr1[n], arr2[n], temp;
	for (long int i = 0; i <= n - 1; i++)
	{
		cin >> arr1[i];
	}
	for (long int i = 0; i <= n - 1; i++)
	{
		cin >> arr2[i];
	}
	for (long int a = 0; a <= n - 2; a++)
	{
		for (long int b = 0; b <= n - a - 2; b++)
		{
			if (arr1[b] > arr1[b + 1])
			{
				temp = arr1[b];
				arr1[b] = arr1[b + 1];
				arr1[b + 1] = temp;
			}
			if (arr2[b] > arr2[b + 1])
			{
				temp = arr2[b];
				arr2[b] = arr2[b + 1];
				arr2[b + 1] = temp;
			}
		}
	}
	int flag = 1;
	for (long int j = 0; j <= n - 1; j++)
	{
		if (arr1[j] <= arr2[j])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
 
	return 0;
}