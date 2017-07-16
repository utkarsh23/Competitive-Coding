#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cstdio>
 
using namespace std;
 
void insertion_sort(int A[], int n)
{
	int i, key, j;
	for (int i = 1; i < n; i++)
	{
		key = A[i];
		j = i - 1;
		while ((j >= 0) && (key < A[j]))
		{
			A[j + 1] =A[j];
			j--;
		}
		A[j + 1] = key;
	}
}
 
int main()
{
	int n;
	cin >> n;
	int arr[n], even = 0, odd = 0;
	for (int a = 0; a <= n - 1; a++)
	{
		cin >> arr[a];
	}
	insertion_sort(arr,n);
	for (int b = 0; b <= n - 1; b++)
	{
		if (arr[b] % 2 == 0)
		{
			cout << arr[b] << " ";
			even += arr[b];
		}
	}
	cout << even << " ";
	for (int c = 0; c <= n - 1; c++)
	{
		if (arr[c] % 2 != 0)
		{
			cout << arr[c] << " ";
			odd += arr[c];
		}
	}
	cout << odd << " ";
	return 0;
}