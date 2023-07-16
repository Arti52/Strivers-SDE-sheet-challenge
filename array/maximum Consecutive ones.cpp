//Time Complexity->O(N) beats 43 % and space Complexity->O(1) beats 100%.
#include<bits/stdc++.h>
int longestSubSeg(vector<int> &arr , int n, int k){
   int j=0,ans=0,zeroes=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==0)
          zeroes++;
            while(zeroes>k)
            {  
                if(arr[j]==0)
                    zeroes--;
               j++;
              
            }
             ans=max(ans,i-j+1);
   }
   return ans;
}

