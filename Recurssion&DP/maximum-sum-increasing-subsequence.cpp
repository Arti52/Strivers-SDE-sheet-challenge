#include <bits/stdc++.h> 
int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
       int ans=rack[0];
       vector<int>dp=rack;
       for (int i=1;i<n;i++)
       {
           for (int j=0;j<i;j++)
           {
               if (rack[i]>rack[j])
               {
                   if (dp[j]+rack[i]>dp[i])
                   {
                       dp[i]=dp[j]+rack[i];
                   }
               }
           }
           ans=max(ans,dp[i]);
       }
       return ans;

}
