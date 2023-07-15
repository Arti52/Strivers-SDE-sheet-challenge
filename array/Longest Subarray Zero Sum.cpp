//O(N) 100% beats in time complexity as well as in space Complexity O(N).
#include <bits/stdc++.h>
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int sum=0;
  int ans=0;
  unordered_map<int,int> ump;
  ump[0]=-1;
  for(int i=0;i<arr.size();i++)
  {
    sum+=arr[i];
    if(ump.find(sum)!=ump.end())
    {
         ans=max(ans,i-ump[sum]);
    }
    else
     {
       ump[sum]=i;
     }
  }
  return ans;

}
