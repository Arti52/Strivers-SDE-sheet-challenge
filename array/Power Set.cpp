//Using Bit manipulation Time Complexity->O(n*2^n) beats 18% and Space Complexity->O(1) beats 35%.
#include <bits/stdc++.h> 
vector<vector<int>> pwset(vector<int>v)
{
  int n=v.size();
  vector<vector<int>> ans;
  for(int i=0;i<=pow(2,n)-1;i++)
  {    
      vector<int>sub;
      for(int j=0;j<=n-1;j++)
      {
          if(i&(1<<j))
        sub.push_back(v[j]);
      }
      ans.push_back(sub);
  }
  return ans;

}
