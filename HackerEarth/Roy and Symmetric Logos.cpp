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
 
vector<long long> digits_to_vec(string num)
{
	vector<long long> toret;
	for (long long c = 0; c < num.size(); c++)
	{
		toret.push_back((long long) num[c]);
	}
	return toret;
}
 
bool check_symmetry(vector<vector<long long>> v)
{
	for (long long x = 0; x < (v.size() / 2); x++)
	{
		if (v[x] != v[v.size() - x - 1])
		{
			return false;
		}
	}
	return true;
}
 
int main()
{
	long long n, length;
	string element;
	vector<vector<long long>> vec_1, vec_2;
	vector<long long> row;
	cin >> n;
	for (long long i = 0; i < n; i++)
	{
		cin >> length;
		cin.ignore();
		for (long long j = 0; j < length; j++)
		{
			getline(cin, element);
			vec_1.push_back(digits_to_vec(element));
		}
		for (long long j = 0; j < length; j++)
		{
			for (long long k = 0; k < length; k++)
			{
				row.push_back(vec_1[k][j]);
				//cout << vec_1[j][k] << " ";
			}
			//cout << "\n";
			vec_2.push_back(row);
			row.erase(row.begin(), row.end());
		}
		if (check_symmetry(vec_1) && check_symmetry(vec_2))
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
		vec_1.erase(vec_1.begin(), vec_1.end());
		vec_2.erase(vec_2.begin(), vec_2.end());
	}
	return 0;
}