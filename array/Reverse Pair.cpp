//Optimal Approach Of striver Time Complexity->(nlogn) beats 75% and Space Complexity O(N) beats 100%. 
#include <bits/stdc++.h> 

#include <bits/stdc++.h> 
void merge(vector<int>&arr,int lo,int mid,int hi){
      vector<int>temp;
      int left = lo;
      int right = mid+1;
      
      while(left<=mid && right<=hi){
        if(arr[left]<arr[right]){
        temp.push_back(arr[left]);
        left++;
      }
      else{
        temp.push_back(arr[right]);
        right++;
      }
    }

      while(left<=mid){
        temp.push_back(arr[left]);
        left++;
      }
      while(right<=hi){
        temp.push_back(arr[right]);
        right++;
      }
      
      for(int i=lo;i<=hi;i++){
        arr[i] = temp[i-lo];
      }
}
int countPairs(vector<int>&arr,int low,int mid,int high){
    int right = mid+1;
    int cnt =0;
    for(int i=low;i<=mid;i++){
      while(right<=high && arr[i]>2*arr[right])
      right++;
      cnt+=(right-(mid+1));
    }
    return cnt;
}
int mergeSort(vector<int>&arr,int low,int high){
	int cnt =0;
	if(low>=high)
		return cnt;
	int mid = (low+high)/2;
	cnt+=mergeSort(arr,low,mid);
	cnt+=mergeSort(arr,mid+1,high);
	cnt+=countPairs(arr,low,mid,high);
	merge(arr,low,mid,high);
	return cnt;
}
int reversePairs(vector<int> &arr, int n){
	return mergeSort(arr,0,n-1);
}
