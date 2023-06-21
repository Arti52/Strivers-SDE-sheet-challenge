//Simple approach with O(N) Time Complextity and O(1) space comlexity//
#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	unordered_map<int,int> ump;
	for(int i=0;i<n;i++)
	{
		ump[arr[i]]++;
		if(ump[arr[i]]>n/2)
		   return arr[i];
	}
	return -1;
}
