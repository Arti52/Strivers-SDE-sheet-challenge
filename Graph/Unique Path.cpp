//Time Complexity->O(N^2) beats 52 % and Space Complexity->O(1) beats 97%.
#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	vector<vector<int>>path(m,vector<int>(n,1));
    for(int i = 1; i < m; i++){
      for (int j = 1; j < n; j++) {
        path[i][j] = path[i - 1][j] + path[i][j - 1];
      }
    }
    return path[m - 1][n - 1];
}
