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
	long long n, k, element, smallest, index, cost;
	cin >> n >> k;
	vector<long long> fcosts;
	vector<long long> people(k, 0);
	for (long long i = 0; i <= n - 1; i++)
	{
		cin >> element;
		fcosts.push_back(element);
	}
	sort(fcosts.rbegin(), fcosts.rend());
	cost = 0;
	index = 0;
	for (long long j = 0; j <= n - 1; j++)
	{
		cost += (people[index] + 1) * fcosts[j];
		people[index]++;
		index++;
		if (index == k)
		{
			index = 0;
		}
	}
	cout << cost;
	return 0;
}