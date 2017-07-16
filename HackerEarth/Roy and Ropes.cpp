#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <utility>
#include <limits>
 
using namespace std;
 
int main()
{
	long long n, length, element;
	cin >> n;
	vector<long long> upper;
	vector<long long> lower;
	vector<long long>::iterator upper_max, lower_max;
	for (long long i = 0; i < n; i++)
	{
		cin >> length;
		upper.push_back(0);
		lower.push_back(0);
		for (long long j = 1; j < length; j++)
		{
			cin >> element;
			if ((length - j) >= element)
			{
				upper.push_back(0);
			}
			else
			{
				upper.push_back(element - (length - j));
			}
		}
		for (long long k = 1; k < length; k++)
		{
			cin >> element;
			if ((length - k) >= element)
			{
				lower.push_back(0);
			}
			else
			{
				lower.push_back(element - (length - k));
			}
		}
		upper_max =  max_element(upper.begin(), upper.end());
		lower_max = max_element(lower.begin(), lower.end());
		cout << (length + max(*upper_max, *lower_max)) << "\n";
		upper.erase(upper.begin(), upper.end());
		lower.erase(lower.begin(), lower.end());
	}
	return 0;
}