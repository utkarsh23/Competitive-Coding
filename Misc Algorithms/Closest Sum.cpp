/*	
	Given an array A of n integers, find 3 integers in A such that the sum is closest to a given number.
	Print the sum of the three integers. (You may print any valid solution if multiple exist)

	Example:
	A = {-1 2 1 -4},
	Given number = 1.
	The sum that is closest to the given number is 2. (-1 + 2 + 1 = 2)
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
#include <limits>
 
using namespace std;

int main() {

	int n, num, element, lowest = numeric_limits<int>::max();
	vector<int> arr;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> element;
		arr.push_back(element);
	}

	cin >> num;
	for (int a = 0; a < (n - 2); a++) {
		int b = a + 1;
		int c = b + 1;
		while (b < (n - 1)) {
			if (abs((arr[a] + arr[b] + arr[c]) - num) < abs(lowest - num))
				lowest = arr[a] + arr[b] + arr[c];
			c++;
			if (c == n) {
				b++;
				c = b + 1;
			}
		}
	}

	cout << lowest;

	return 0;
}