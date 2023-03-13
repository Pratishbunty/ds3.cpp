#include <bits/stdc++.h>
using namespace std;

//Function to get the missingnumber
int getMissingNo (int a[] , int n)
{
	// Given the range of elements
	// are 1 more than the size of array
	int N = n + 1;
	
	int total = (N) * (N + 1) / 2;
	for (int i = 0; i < n; i++)
	total -=[i];
	return total;
	}
	//Driver Code
	int main()
	{
		int arr[] = { 3, 2, 4, 5};
		int N = sizeof(arr) / sizeof(arr[0]);
		
	
	// Function call
	int miss = getMissingNo(arr , N);
	cout << miss;
	
	return 0 ;
}
