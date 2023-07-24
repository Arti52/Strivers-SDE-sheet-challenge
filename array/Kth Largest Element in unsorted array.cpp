//Approach 1.Time Complexity->(nlogn) beats 45% and space Complexity O(1) beats 100%.
sort(arr.begin(),arr.end(),greater<int>());
	return arr[K-1];
//Approach 2.Time Complexity->(N) beats 55% and space Complexity O(K) beats 100%.
#include <bits/stdc++.h> 
int kthLargest(vector<int>& arr, int size, int K)
{  
	
	    priority_queue<int ,vector<int>,greater<int>>pq;
		for(int i=0;i<K;++i){
			 pq.push(arr[i]);
		}
		for(int i=K;i<size;++i){
			if(pq.top()<arr[i]){
				pq.pop();
				pq.push(arr[i]);
			}
		}
		return pq.top();
}
