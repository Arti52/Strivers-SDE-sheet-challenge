//My Approach Time Complexity->O(n-m+1)~O(N) {where n is string length and m is pattern length] beats 80 % and Space Complexity ->O(1) beats 91%.
#include <bits/stdc++.h> 
bool findPattern(string p, string s)
{
  int n=s.size();
  int i=0;
  int m=p.size();
  while(i<n)
  {
      if(p[0]==s[i])
      {
          string str=s.substr(i,m);
          if(str==p)
            return true;

      }
      i++;
  }
  return false;
}
