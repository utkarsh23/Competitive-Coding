#include <cmath>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cstdio>
#include <cstring>
#include <set>
 
using namespace std;
 
int BinarySearch(int sortedArray[], int first, int last, int key)
{
	if (first <= last)
	{
		int mid = (first + last) / 2;
		if (key == sortedArray[mid]) 
		{
			return mid;
		}
		else if (key < sortedArray[mid]) 
		{
			return BinarySearch(sortedArray, first, mid - 1, key);
		}
		else
		{
			return BinarySearch(sortedArray, mid + 1, last, key);
		}
	}
	return -(first + 1);
}
 
void merge(long int A[ ] , long int start, long int mid, long int end) {
 //stores the starting position of both parts in temporary variables.
long int p = start ,q = mid+1;
 
long int Arr[end-start+1] , k=0;
 
for(int i = start ;i <= end ;i++) {
    if(p > mid)      //checks if first part comes to an end or not .
       Arr[ k++ ] = A[ q++] ;
 
   else if ( q > end)   //checks if second part comes to an end or not
       Arr[ k++ ] = A[ p++ ];
 
   else if( A[ p ] < A[ q ])     //checks which part has smaller element.
      Arr[ k++ ] = A[ p++ ];
 
   else
      Arr[ k++ ] = A[ q++];
 }
  for (int p=0 ; p< k ;p ++) {
   /* Now the real array has elements in sorted manner including both 
        parts.*/
     A[ start++ ] = Arr[ p ] ;                          
  }
}
 
void merge_sort (long int A[ ] , long int start , long int end )
   {
           if( start < end ) {
           long int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
           merge_sort (A, start , mid ) ;                 // sort the 1st part of array .
           merge_sort (A,mid+1 , end ) ;              // sort the 2nd part of array.
 
         // merge the both parts by comparing elements of both the parts.
          merge(A,start , mid , end );   
   }                    
}
 
int main()
{
	long int n;
	cin >> n;
	long int arr[n], rounds, inp, sum, k;
	for (long int i = 0; i <= n - 1; i++)
	{
		cin >> arr[i];
	}
	merge_sort(arr, 0, n - 1);
	cin >> rounds;
	for (long int j = 0; j <= rounds - 1; j++)
	{
		cin >> inp;
		sum = 0;
		for (k = 0; k <= n - 1; k++)
		{
			if (arr[k] > inp)
			{
				break;
			}
			sum += arr[k];
		}
		cout << k << " " << sum << "\n";
		/*
		hold = BinarySearch(arr, 0, n - 1, inp);
		if (hold != -1)
		{
			for (long int k = 0; k <= n - 1; k++)
			{
 
			}
		}
		*/
	}
	return 0;
}