#include <bits/stdc++.h>
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
     unordered_set<int> s;
//   int n   = nums.size();
  if( n == 0 )
{
    return 0;
}
  int  ans  = 1;
for( int  i  = 0 ; i < n ; i++){
  s.insert(arr[i]);
}
for( auto it: s){
    if(s.find( it-1) == s.end()){
        int cnt = 1;
        int x = it;
        while (s.find(x + 1) != s.end()) {
          cnt = cnt + 1;
          x = x + 1;
        }
        ans = max(ans, cnt);
    }
}
return ans;
}
