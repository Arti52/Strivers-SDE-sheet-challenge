//Time Complexity->O(N) beats 82% and Space Complexity->O(n-k+1) beats 100%.
#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
    unordered_map<int,int> ump;
    for(int i=0;i<k;i++)
    {
        ump[arr[i]]++;
    }
    vector<int> ans;
    ans.push_back(ump.size());
    for(int i=k;i<arr.size();i++)
    {
        if(ump[arr[i-k]]==1)
          ump.erase(arr[i-k]);
        else
          ump[arr[i-k]]--;
        ump[arr[i]]++;
        ans.push_back(ump.size());
    }
	return ans;
}
