/*	
	Problem: 
	Given a string S composed of 0 and 1. Find the minimum splits such that the substring is a binary representation of the power of 4 or 6 with no leading zeros. Print -1 if no such partitioning is possible.
	Input: 100110110
	Output: 3
	The string can be split into a minimum of 
	three substrings 100(power of 4), 110
	(power of 6) and 110(power of 6).

	Input : 00000
	Output : -1
	0 is not a power of  4 or 6.
*/

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
#define INT_MAX numeric_limits::max()

using namespace std;

bool isPowerOf4or6(long val) {
	while (val > 1) {
		if (val % 4 != 0) {
			while (val > 1) {
				if (val % 6 != 0) {
					return false; // not a power of 4 or 6
				}
				val /= 6;
			}
			return true;
		}
		val /= 4;
	}
	return true;
}

int partitions(string binstring) {

	int i, j, n = binstring.length();
	long val;
	int dp[n];

	dp[n - 1] = ((binstring[n - 1] - '0') == 0) ? -1 : 1;

	for (i = n - 2; i >= 0; i--) {
		val = 0;

		if ((binstring[i] - '0') == 0) {
			dp[i] = -1;
			continue;
		}

		dp[i] = INT_MAX;

		for (j = i; j < n; j++) {

			val = (val * 2) + (long)(binstring[j] - '0');

			if (isPowerOf4or6(val)) {
				if (j == n - 1) {
					dp[i] = 1;
				}
				else {
					if (dp[j + 1] != -1)
						dp[i] = min(dp[i], dp[j + 1] + 1);
				}
			}
		}

		if (dp[i] == INT_MAX) {
			dp[i] = -1;
		}
	}

	return dp[0];
}