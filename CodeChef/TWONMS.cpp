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
	long long n, A, B, turns, hold;
	bool odd;
	cin >> n;
	for (long long i = 0; i <= n - 1; i++)
	{
		cin >> A >> B >> turns;
		if (turns != 1)
		{
			odd = false;
			if ((turns % 2) != 0)
			{
				odd = true;
				turns--;
			}
			turns /= 2;
			hold = (2 * turns);
			A *= hold;
			B *= hold;
			if (odd)
			{
				A *= 2;
			}
			cout << (max(A, B) / min(A, B)) << "\n";
		}
		else
		{
			A *= 2;
			cout << (max(A, B) / min(A, B)) << "\n";
		}
	}
	return 0;
} 