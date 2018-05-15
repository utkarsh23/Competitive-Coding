// problem: https://practice.geeksforgeeks.org/problems/search-in-a-matrix/0

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

	int t, m, n;
	cin >> t;

	for (int i = 0; i < t; i++) {

		cin >> m >> n;

		int array[31][31], element, a, b;
		bool exists = false;
		
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				cin >> array[j][k];
			}
		}
		
		cin >> element;
		
		a = m - 1;
		b = 0;
		
		while (a >= 0 && b < n ) {
			if (element == array[a][b]) {
				exists = true;
				break;
			}
			else if (element < array[a][b]) {
				a--;
			}
			else {
				b++;
			}
		}

		if (exists) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}

	return 0;
}