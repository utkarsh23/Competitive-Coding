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

long long add = 0;

void tiles(vector<vector<int>> mat, int em, int en, int fin, int sin)
{
	if ((fin == em - 1) && (sin == en))
	{
		add++;
		cout << add << "\n";
		for (int i = 0; i <= em - 1; i++)
		{
			for (int j = 0; j <= en - 1; j++)
			{
				if (mat[i][j] == 1) cout << "<<" << " ";
				if (mat[i][j] == 2) cout << ">>" << " ";
				if (mat[i][j] == 3) cout << "/\\" << " ";
				if (mat[i][j] == 4) cout << "\\/" << " ";
			}
			cout << "\n";
		}
	}
	else
	{
		if (sin == en)
		{
			sin = 0;
			fin++;
		}
		if ((fin == 0) || (mat[fin - 1][sin] != 3))
		{
			if ((sin == 0) || (mat[fin][sin - 1] != 1))
			{
				if (((fin == 0) || (mat[fin - 1][sin + 1] != 3)) && (sin != en - 1))
				{
					mat[fin][sin] = 1;
					tiles(mat, em, en, fin, sin + 1);
				}
				if (fin != em - 1)
				{
					mat[fin][sin] = 3;
					tiles(mat, em, en, fin, sin + 1);
				}
			}
			else
			{
				mat[fin][sin] = 2;
				tiles(mat, em, en, fin, sin + 1);
			}
		}
		else
		{
			mat[fin][sin] = 4;
			tiles(mat, em, en, fin, sin + 1);
		}
	}
}
 
int main()
{
	int m, n,count;
	cout << "Enter rows: ";
	cin >> m;
	cout << "Enter columns: ";
	cin >> n;
	vector<vector<int>> matrix(m+n, vector<int> (m+n,0));
	tiles(matrix, max(m, n), min(m, n), 0, 0);
	cout << "Total Solutions: " << add << "\n";
	return 0;
}