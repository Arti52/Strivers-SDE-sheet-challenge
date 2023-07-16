//striver approach as binary search taking time complexity O(log2(m)*log2(n) beats 65% and space complexity O(1)   beats 98%.
#include<bits/stdc++.h>
int help(int mid,int n,int m)
{
  long long ans=1;
  for(int i=1;i<=n;i++)
  {    
    ans*=mid;
    if(ans>m)return 1;
  }
  if(ans==m)return 0;
  return -1;
}


int NthRoot(int n, int m) {
  // Write your code here.
  int low=1,high=m;
  while(low<=high)
  {
    int mid=low+(high-low)/2;
    int val=help(mid,n,m);
    if(val==0)return mid;
    else if(val==-1)
      low=mid+1;
    else
      high=mid-1;
  }
  return -1;
}
