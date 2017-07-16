#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cstdio>
#include <cstring>
 
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
 
int niceness(char strings[][11], char st[], int n)
{
	int score = 0, index = 0;
	while (index != n)
	{
		if ((strcmp(st, strings[index]) != 0) && lexicographical_compare(strings[index], strings[index] + 10, st, st + 10))
		{
			score++;
		}
		index++;
	}
	return score;
}
 
int main()
{
	int n;
	cin >> n;
	char strs[1001][11], s[11];
	int hold[n];
	for (int a = 0; a <= n - 1; a++)
	{
		cin >> s;
		hold[a] = niceness(strs, s, a);
		strncpy(strs[a], s, 10);
	}
	for (int b = 0; b <= n - 1; b++)
	{
		cout << hold[b] <<"\n";
	}
	return 0;
}