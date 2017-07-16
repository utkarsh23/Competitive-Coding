#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <utility>
#include <limits>
 
using namespace std;
 
string increaseby10x(string hold, long long index)
{
	string temphold = hold;
	long long tempindex = index;
	bool exit = false;
	while (!exit)
	{
		if (tempindex == -1)
		{
			temphold = '3' + temphold;
			break;
		}
		if (temphold[tempindex] == '9')
		{
			temphold.replace(tempindex, 1, "3");
			tempindex -= 1;
			exit = false;
		}
		else
		{
			temphold[tempindex] += 1;
			exit = true;
		}
	}
	return temphold;
}
 
void Next_Lucky(string newnum)
{
	string temp = newnum;
	long long last;
	bool increased;
	for (long long x = (temp.length() - 1); x >= 0; x--)
	{
		last = temp[x] - '0';
		increased = false;
		if (last > 5)
		{
			temp.replace(x, 1, "3");
			temp = increaseby10x(temp, x - 1);
			increased = true;
		}
		else if (last == 4)
		{
			temp.replace(x, 1, "5");
			increased = true;
 
		}
		else if (last < 3)
		{
			temp.replace(x, 1, "3");
			increased = true;
		}
		if (increased)
		{
			temp.replace(x + 1, temp.length() - x - 1, temp.length() - x - 1, '3');
		}
	}
	if (newnum != temp)
	{
		cout << temp << "\n";
	}
	else
	{
		temp[temp.length() - 1] += 1;
		Next_Lucky(temp);
	}
}
 
int main()
{
	long long n;
	string element;
	vector<string> vec;
	cin >> n;
	cin.ignore();
	for (long long i = 0; i < n; i++)
	{
		getline(cin, element);
		vec.push_back(element);
	}
	for (long long j = 0; j < n; j++)
	{
		Next_Lucky(vec[j]);
	}
	return 0;
}