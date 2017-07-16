#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, sum = 0;
	int alice[3], bob[3], ascore = 0, bscore = 0;
	for (int i = 0; i <= 2; i++)
	{
		cin >> alice[i];
	}
	for (int j = 0; j <= 2; j++)
	{
		cin >> bob[j];
	}
	for (int k = 0; k <= 2; k++)
	{
		if (alice[k] > bob[k])
		{
			ascore += 1;
		}
		else if (alice[k] < bob[k])
		{
			bscore += 1;
		}
	}
	cout << ascore << " " << bscore;
	return 0;
}