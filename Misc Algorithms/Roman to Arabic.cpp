/*	
	Problem: 
	Given a roman numeral, convert it to an integer.
	Input is guaranteed to be within the range from 1 to 3999.

	Sample Input: XIV
	Sample Output: 14
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

int arabic(char ch) {
	switch (ch) {
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		default:
			return 0;
	}
}

int RomanToArabic(string roman) {
	int size = roman.length(), num = 0, first, second;
	for (int i = 0; i < size; i++) {
		first = arabic(roman[i]);
		if ((i + 1) < size) {
			second = arabic(roman[i + 1]);
			if (first < second) {
				num += (second - first);
				i++;
			}
			else {
				num += first;
			}
		}
		else {
			num += first;
			i++;
		}
	}
	return num;
}

int main() {

	string a = "XIV";
	cout << RomanToArabic(a);

	return 0;
}