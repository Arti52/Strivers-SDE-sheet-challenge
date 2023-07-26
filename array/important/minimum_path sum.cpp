//1.Striver Approach(Recursion gives TLE).
#include <bits/stdc++.h>
int help(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp)
{
    if(i==0 && j==0)
      return grid[i][j];
    if(i<0||j<0) return 1e9;
    int up=grid[i][j]+help(i-1,j,grid);
    int left=grid[i][j]+help(i,j-1,grid);
    return min(up,left);
} 
int minSumPath(vector<vector<int>> &grid) {
   int n=grid.size();
   int m=grid[0].size();
   return help(n-1,m-1,grid);
}
//2.Approach(Memorization works) Time Complexity: O(N*M)  beats 8% and space Complexity: O((M-1)+(N-1)) + O(N*M)   beats 98%.
#include <bits/stdc++.h>
int help(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp)
{
    if(i==0 && j==0)
      return grid[i][j];
    if(i<0||j<0) return 1e9;
    if(dp[i][j]!=-1)
       return dp[i][j];
    int up=grid[i][j]+help(i-1,j,grid,dp);
    int left=grid[i][j]+help(i,j-1,grid,dp);
    return dp[i][j]=min(up,left);
} 
int minSumPath(vector<vector<int>> &grid) {
   int n=grid.size();
   int m=grid[0].size();
   vector<vector<int>> dp(n,vector<int>(m,-1));
   return help(n-1,m-1,grid,dp);
}
//3.Approach (Tabularization)Time Complexity: O(N*M)   beats 67% and pace Complexity: O((M-1)+(N-1)) + O(N*M) beats 97%.
#include <bits/stdc++.h>
int minSumPath(vector<vector<int>> &grid) {
   int n=grid.size();
   int m=grid[0].size();
   vector<vector<int>> dp(n,vector<int>(m,0));
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          if(i==0&&j==0)
             dp[i][j]=grid[i][j];
          else
          {
            int up=grid[i][j];
            if(i>0)
               up+=d[i-1][j];
            else
              up+=1e9;

             int left=grid[i][j];
            if(j>0)
               lef+=d[i][j-1];
            else
              left+=1e9;
          }
          dp[i][j]=min(left,up);
        }
   return dp[n-1][m-1];
}
//Approach 4(Space Optimization)  Time Complexity: O(N*M) beats 15% and pace Complexity: O((M-1)+(N-1)) + O(N*M) beats 97%.
#include <bits/stdc++.h>
int minSumPath(vector<vector<int>> &grid) {
   int n=grid.size();
   int m=grid[0].size();
   vector<vector<int>> dp(n,vector<int>(m,0));
    vector<int> prev(m,0);
  for(int i=0;i<n;i++)
    {
       vector<int> curr(m,0);
      for(int j=0;j<m;j++)
        {
          if(i==0&&j==0)
             curr[j]=grid[i][j];
          else
          {
            int up=grid[i][j];
            if(i>0)
               up+=prev[j];
            else
              up+=1e9;

             int left=grid[i][j];
            if(j>0)
               left+=curr[j-1];
            else
              left+=1e9;
            curr[j]=min(left,up);
          }
          
        }
        prev=curr;
    }
   return prev[m-1];
}
