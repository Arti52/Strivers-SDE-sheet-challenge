//Simple Approach Time Complexity->O(N!) beats 55% and Space Compplexity->O(N!) beats 100%.
#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;
  for(int i=0;i<n;i++)
  { 
     vector<long long int> row_wise;
    for(int j=0;j<=i;j++)
    {
          if(j==0 || j==i){ 
            row_wise.push_back(1);
            }
          else{
           row_wise.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
        /*row_wise.push_back(item);
		    item=item*(i-j)/j;*/
    }
    ans.push_back(row_wise);
  }
  return ans;
}
