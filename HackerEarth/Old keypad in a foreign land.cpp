#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cstdio>
 
using namespace std;
 
void selection_sort(int A[], int n)
{
	int minimum;
	for (int i = 0; i < n - 1; i++)
	{
		minimum = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] > A[minimum])
			{
				minimum = j;
			}
		}
		swap(A[minimum], A[i]);
	}
}
 
int main()
{
	int n, k, loop, add, track, sum;
	cin >> n;
	int arr[n];
	for (int a = 0; a <= n - 1; a++)
	{
		cin >> arr[a];
	}
	cin >> k;
	int keys[k];
	for (int b = 0; b <= k - 1; b++)
	{
		cin >> keys[b];
		add += keys[b];
	}
	if (add < n)
	{
		cout << -1;
		return 0;
	}
	selection_sort(arr, n);
	selection_sort(keys, k);
	//reverse(begin(arr), end(arr));
	//reverse(begin(keys), end(keys));
	loop = 1;
	while (track < n)
	{
		for (int x = 0; x <= k - 1; x++)
		{
			if ((keys[x] == 0) || (track > (n - 1)))
			{
				break;
			}
			arr[track] *= loop;
			track++;
			keys[x]--;
		}
		loop++;
	}
	sum = 0;
	for (long int pp = 0; pp <= n - 1; pp++)
	{
		sum += arr[pp];
	}
	cout << sum;
	return 0;
}