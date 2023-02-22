// C++ code to find
// duplicates in O(n) time
#include <bits/stdc++.h>
using namespace std;

// Throught this approach we can only get single duplicate present in the array.
// this no good one.
int finddup(int *arr, int n){
	int ans=-1;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if(arr[i]== arr[j]){
				ans=arr[i];
			}
		}
		
	}
	return ans;
	
}

int main()
{
	int numRay[] = { 2,2,2,3,3};
	int arr_size = sizeof(numRay) / sizeof(numRay[0]);
	// count the frequency
	for (int i = 0; i < arr_size; i++) {
		numRay[numRay[i] % arr_size]
			= numRay[numRay[i] % arr_size] + arr_size;
	}
	cout << "The repeating elements are : " << endl;
	for (int i = 0; i < arr_size; i++) {
		if (numRay[i] >= arr_size * 2) {
			cout << i << " " << endl;
		}
	}

	cout<<finddup(numRay,arr_size);
	return 0;
}
