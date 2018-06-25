/*	
	Given an array of non-negative integers, you are initially positioned at the first index of the array.
	Each element in the array represents your maximum jump length at that position.
	Your goal is to reach the last index in the minimum number of jumps.

	Example :
	Given array A = [2,3,1,1,4]
	The minimum number of jumps to reach the last index is 2. (Jump 1 step from index 0 to 1, then 3 steps to the last index.)
	If it is not possible to reach the end index, return -1.
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
#define MAX_INT numeric_limits<int>::max()
 
using namespace std;

int main() {

	int n, element, limit, step;
	vector<int> arr, tracker;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> element;
		arr.push_back(element);
		tracker.push_back(MAX_INT);
	}

	for (int a = n - 1; a >= 0; a--) {
		step = arr[a] + a;
		if (step >= (n - 1)) {
			tracker[a] = 1;
		}
		else {
			tracker[a] = (tracker[step] != MAX_INT) ? tracker[step] + 1 : tracker[step];
			for (int b = step - 1; b > a; b--) {
				if (tracker[b] < tracker[a])
					tracker[a] = tracker[b] + 1;
			}
		}
	}

	cout << ((tracker[0] != MAX_INT) ? tracker[0] : -1) << '\n';

	return 0;
}