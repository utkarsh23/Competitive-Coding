/*	
	Problem: 
	void mergeArrays(int arr1[], int arr2[], int m, int n);
	You are given the above function declaration. Assume arr1 and arr2 are two sorted arrays with m integers, and n integers respectively.  Also assume, that arr1 has the capacity to hold (m + n) integers. Create the function which stores the contents of arr1 and arr2 in arr1 in sorted order, with O(1) space and O(m + n) time complexity. No need to return arr1, just store the values in arr1.
	Example:
	Input arrays:
	arr1 = 1, 2, 3, 6, 8, 9, -, -, -
	arr2 = 5, 7, 10
	Output array:
	arr1 = 1, 2, 3, 5, 6, 7, 8, 9, 10
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
 
using namespace std;

int main() {

	int m, n, tm, tn, last;
	cin >> m >> n;
	int arr1[m + n], arr2[n];

	for (int i = 0; i < m; i++)
		cin >> arr1[i];

	for (int j = 0; j < n; j++)
		cin >> arr2[j];

	tm = m - 1;
	tn = n - 1;
	last = m + n - 1;

	while ((tm >= 0) && (tn >= 0)) {
		if (arr1[tm] > arr2[tn]) {
			arr1[last] = arr1[tm];
			tm--;
		} else {
			arr1[last] = arr2[tn];
			tn--;
		}
		last--;
	}

	while (tm >= 0) {
		arr1[last] = arr1[tm];
		tm--;
		last--;
	}

	while (tn >= 0) {
		arr1[last] = arr2[tn];
		tn--;
		last--;
	}

	for (int ind = 0; ind < (m + n); ind++) {
		cout << arr1[ind] << " ";
	}
	cout << "\n";

	return 0;
}