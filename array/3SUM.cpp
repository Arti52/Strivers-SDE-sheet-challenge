// beats 12% in time Complexity and 95% in Space Complexity.
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    int i=0;
    for(int k=n-1;k>1;k--){
        while(k!=n-1 && arr[k]==arr[k+1]) k--;
        int j=k-1;
        while(i<j){
            if(arr[i]+arr[j]+arr[k]==K){
                ans.push_back({arr[i],arr[j],arr[k]});
                int a = arr[i];
                int b = arr[j];
                while(i<j && arr[i]== a) i++;
                while(i<j && arr[j]==b) j--;
            }
            else if(arr[i]+arr[j]+arr[k]>K)j--;
            else i++;
        }
        i=0;
    }
    return ans;
}
