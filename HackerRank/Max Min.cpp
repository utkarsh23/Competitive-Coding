#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <utility>
 
using namespace std;
 
int main()
{
	long long n, k, element, min, diff;
	vector<long long> v;
	cin >> n >> k;
	k--;
	for (long long i = 0; i <= n - 1; i++)
	{
		cin >> element;
		v.push_back(element);
	}
	sort(v.begin(), v.end());
	min = v[k] - v[0];
	for (long long j = 1; j <= n - k - 1; j++)
	{
		diff = v[j + k] - v[j];
		if (diff < min)
		{
			min = diff;
		}
	}
	cout << min;
	return 0;
}