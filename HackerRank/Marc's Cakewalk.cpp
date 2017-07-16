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
	long long n, element, miles;
	cin >> n;
	vector<long long> v;
	for (long long i = 0; i <= n - 1; i++)
	{
		cin >> element;
		v.push_back(element);
	}
	sort(v.rbegin(), v.rend());
	miles = 0;
	for (long long j = 0; j <= n - 1; j++)
	{
		miles += ((long long) pow(2, j)) * v[j];
	}
	cout << miles;
	return 0;
}