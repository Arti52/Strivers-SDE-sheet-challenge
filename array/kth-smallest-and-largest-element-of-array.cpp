//1.My Approach Time Complexity->O(NlogN) beats 45% and Space Complexity->O(1) beats 99%.
#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	sort(arr.begin(), arr.end());
	int kthsmallest=arr[k-1];
	int kthlargest=arr[n-k];
	return {kthsmallest,kthlargest};

}
// By Algorith Time Complexity->O(N) ans Space Complexity->O(N);
#include <bits/stdc++.h> 
int partition(vector<int>& arr,int low,int high)
{
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j)
    {
        while(i<high && pivot>=arr[i])
          i++;
        while(j>low && pivot<arr[j])
          j--;
        if(i<j)
         swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
int QuickSelect(vector<int>& arr,int low,int high,int k)
{
    if(low>=high)
      return arr[low];


    int pindex=partition(arr,low,high);
    if(pindex+1==k)
    {
        return arr[pindex];
    }
    if(pindex+1>k)
      return QuickSelect(arr,low,pindex-1,k);
    else
      return QuickSelect(arr,pindex+1,high,k);
}
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{

    int small=QuickSelect(arr,0,n-1,k);
    int large=QuickSelect(arr,0,n-1,n-k+1);
    return {small,large};

}

