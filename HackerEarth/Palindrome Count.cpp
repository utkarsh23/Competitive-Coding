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
	string strr, subst, rsubst;
	getline(cin, strr);
	long long counter = 0, length = strr.length();
	vector<string> strings;
	for (long long i = 0; i < (length - 1); i++)
	{
		for (long long j = 2; j <= length; j++)
		{
			if ((i + j) == (strr.length() + 1))
			{
				break;
			}
			subst = strr.substr(i, j);
			if (find(strings.begin(), strings.end(), subst) == strings.end())
			{
				rsubst = subst;
				reverse(rsubst.rbegin(), rsubst.rend());
				if (subst.compare(rsubst) == 0)
				{
					counter++;
				}
				strings.push_back(subst);
			}
		}
	}
	cout << counter + strr.length();
	return 0;
}