// Simple Approach and 95% beats //
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   sort(arr.begin(), arr.end());
   vector<vector<int>> ans;
   for(int i=0;i<arr.size()-1;i++)
   {
     for(int j=i+1;i<arr.size();j++)
      {
          if(arr[i]+arr[j]==s)
          {  
             int fir=arr[i],sec=arr[j];
             ans.push_back({fir,sec});
          }
          if(arr[i]+arr[j]>s) break;   //As Array is sorted already so further elements sum is always greater//
      }
   }
   return ans;
}
