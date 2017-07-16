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
 
long long element, modd = pow(10,9) + 7;
map<long long, long long> factorials;
map<long long, long long>::iterator found;
long long fact(long long n)
{
    found = factorials.find(n);
    if (found != factorials.end())
    {
        return factorials[n];
    }
    else
    {
        element = ((n % modd) * (fact(n - 1) % modd)) % modd;
        factorials[n] = element;
        return element;
    }
}
 
int main()
{
    long long n, element;
    vector<long long> findele;
    cin >> n;
    factorials[0] = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> element;
        findele.push_back(element);
    }
    for (int j = 0; j <= n - 1; j++)
    {
        cout << fact(findele[j]) << "\n";
    }
    return 0;
}