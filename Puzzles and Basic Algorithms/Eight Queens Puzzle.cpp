#include <cmath>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cstdio>
#include <cstring>
#include <set>
 
using namespace std;

vector<vector<int>> twod;
int counter = 0;

bool check_illegals(vector<int> pair, vector<vector<int>> rpairs, int en)
{
	int r, c;
	for (int x = 0; x < rpairs.size(); x++)
	{
		for (int p = 0; p <= en; p++)
		{
			if ((rpairs[x][0] == pair[0]) && (p == pair[1]))
			{
				return false;
			}
			if ((rpairs[x][1] == pair[1]) && (p == pair[0]))
			{
				return false;
			}
		}
		r = rpairs[x][0] - 1, c = rpairs[x][1] - 1;
		while ((r >= 0) && (c >= 0))
		{
			if ((r == pair[0]) && (c == pair[1]))
			{
				return false;
			}
			r--;
			c--;
		}
		r = rpairs[x][0] - 1, c = rpairs[x][1] + 1;
		while ((r >= 0) && (c <= en))
		{
			if ((r == pair[0]) && (c == pair[1]))
			{
				return false;
			}
			r--;
			c++;
		}
		r = rpairs[x][0] + 1, c = rpairs[x][1] - 1;
		while ((r <= en) && (c >= 0))
		{
			if ((r == pair[0]) && (c == pair[1]))
			{
				return false;
			}
			r++;
			c--;
		}
		r = rpairs[x][0] + 1, c = rpairs[x][1] + 1;
		while ((r <= en) && (c <= en))
		{
			if ((r == pair[0]) && (c == pair[1]))
			{
				return false;
			}
			r++;
			c++;
		}
	}
	return true;
}

void solutions(int n, int f)
{
	if (f == n + 1)
	{
		if (twod.size() == (n + 1))
		{
			/*cout << "Solution\n";
			for (int i = 0; i < twod.size(); i++)
			{
				cout << twod[i][0] << "," << twod[i][1];
			    cout << "\n";
			}
			cout << "\n";*/
			counter++;
		}
	}
	else
	{
		for (int a = 0; a <= n; a++)
		{
			vector<int> add = {f,a};
			bool flag = check_illegals(add, twod, n);
			if (flag)
			{
				twod.push_back(add);
				solutions(n, f + 1);
				if (!(twod.empty()))
				{
					twod.pop_back();
				}
			}
		}
	}
}
int main()
{
	long int n;
	cout << "Enter length of a side of the chessboard: ";
	cin >> n;	
	solutions(n - 1,0);
	cout << counter << " solutions.\n";	
	return 0;
}