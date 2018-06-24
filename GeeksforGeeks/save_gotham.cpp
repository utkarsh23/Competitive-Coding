/*
https://practice.geeksforgeeks.org/problems/save-gotham/0
*/

#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <utility>

#define MODULO 1000000001
 
using namespace std;

int main() {

	long int t, n, sum, array[18001], last;
	cin >> t;

	for (long int i = 0; i < t; i++) {

		cin >> n;
		sum = 0;

		for (long int j = 0; j < n; j++)
			cin >> array[j];

		stack<long int> st;
		st.push(array[0]);

		for (long int k = 1; k < n; k++) {
			if (array[k] > st.top()) {
				while (!st.empty() && (array[k] > st.top())) {
					sum = ((sum % MODULO) + (array[k] % MODULO)) % MODULO;
					st.pop();
				}
			}
			st.push(array[k]);
		}

		cout << sum << "\n";
	}

	return 0;
}
