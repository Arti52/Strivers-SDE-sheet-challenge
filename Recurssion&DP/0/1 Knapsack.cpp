//Time complexity->O(N*W) beats 83% and Space Complexity->O(N*W) beats 100%.
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	 vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            if (weights[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], values[i - 1] + dp[i - 1][j - weights[i - 1]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][w];
}
