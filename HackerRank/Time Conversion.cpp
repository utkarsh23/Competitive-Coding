#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string originaltime;
	int newno;
	cin >> originaltime;
	if ((originaltime.substr(8,1) == "A") && (originaltime.substr(0,2) == "12"))
	{
		cout << "00" << originaltime.substr(2,6);
	}
	else if ((originaltime.substr(8,1) == "P") && (originaltime.substr(0,2) != "12"))
	{
		newno = stoi(originaltime.substr(0,2)) + 12;
		cout << newno << originaltime.substr(2,6);
	}
	else
	{
		cout << originaltime.substr(0,8);
	}
	return 0;
}