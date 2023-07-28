//Striver Aprroach Time Complexity->O(N*Val) beats 90% and Space Complexity->O(N*Val) beats 50%.
#include<bits/stdc++.h>
long change(int *denominations, int n, int value, int ind, vector<vector<long>> &dp)
{
    if(ind==n)
    {
        if(value==0)
        return 1;

        else
        return 0;
    }

    if(value<0)
    return 0;

    if(dp[ind][value]!=-1)
    return dp[ind][value];
    else
    return dp[ind][value]=long (change(denominations, n, value-denominations[ind], ind, dp) +
     change(denominations,n,value,ind+1, dp));
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    int index =0;
    vector<vector<long>> dp(n,vector<long>(value+1,-1));
    return change(denominations, n,value,  index, dp);
}
