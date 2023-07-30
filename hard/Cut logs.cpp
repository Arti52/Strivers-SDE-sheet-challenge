#include "bits/stdc++.h"
int cutLogs(int k, int n)
{
    // vector<vector<int>> dp(n + 1, vector<int> (k + 1, 0));
    vector<int> dp(k + 1, 0);
    int moves = 0;
    while(dp[k] < n) {
        moves++;
        for(int i = k; i > 0; i--) dp[i] += 1 + dp[i-1];
    }
    return moves;
}
