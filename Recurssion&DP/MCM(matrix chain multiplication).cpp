//Time Complexity->O((N^3) beats 44% and Space Complexity->O(N^2) beats 98%.
#include <bits/stdc++.h> 
int help(vector<int>&arr,int first,int last,vector<vector<int>>&dp) {
    if(first==last-1) {
        return dp[first][last]=0;
    }
    if(dp[first][last]!=-1) {
        return dp[first][last];
    }
    int ans=INT_MAX;
    for(int i=first+1;i<last;i++) {
        if(dp[first][i]==-1) {
            dp[first][i]=help(arr,first,i,dp);
        }
        if(dp[i][last]==-1) {
            dp[i][last]=help(arr,i,last,dp);
        }
        ans=min(ans,dp[first][i]+dp[i][last]+(arr[first]*arr[i]*arr[last]));
    }
    return dp[first][last]=ans;
}

int matrixMultiplication(vector<int> &arr, int N) {
    vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
    return help(arr,0,N-1,dp);
}
