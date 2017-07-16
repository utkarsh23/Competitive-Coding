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
#include <limits>
 
using namespace std;
 
int main()
{
	long long n, length, element;
	vector<long long> first, second, first_cost, second_cost;
	cin >> n;
	for (long long i = 0; i <= n - 1; i++)
	{
		cin >> length;
		for (long long a = 0; a <= length - 1; a++)
		{
			cin >> element;
			first.push_back(element);
		}
		for (long long b = 0; b <= length - 1; b++)
		{
			cin >> element;
			second.push_back(element);
		}
		for (long long c = 0; c <= length - 2; c++)
		{
			cin >> element;
			first_cost.push_back(element);
		}
		for (long long d = 0; d <= length - 2; d++)
		{
			cin >> element;
			second_cost.push_back(element);
		}
		for (long long e = length - 2; e >= 0; e--)
		{
			first[e] = min(first[e] + first[e + 1], first[e] + second[e + 1] + first_cost[e]);
			second[e] = min(second[e] + second[e + 1], second[e] + first[e + 1] + second_cost[e]);
		}
		cout << min(first[0], second[0]) << "\n";
		first.erase(first.begin(), first.end());
		second.erase(second.begin(), second.end());
		first_cost.erase(first_cost.begin(), first_cost.end());
		second_cost.erase(second_cost.begin(), second_cost.end());
	}
	return 0;
}