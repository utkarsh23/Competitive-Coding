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
	long long n, element, diff, newdiff;
	cin >> n;
	vector<long long> v;
	for (long long i = 0; i <= n - 1; i++)
	{
		cin >> element;
		v.push_back(element);
	}
	sort(v.begin(), v.end());
	diff = abs(v[1] - v[0]);
	for (long long j = 2; j <= n - 1; j++)
	{
		newdiff = abs(v[j] - v[j - 1]);
		if (newdiff < diff)
		{
			diff = newdiff;
		}
	}
	cout << diff;
	return 0;
}