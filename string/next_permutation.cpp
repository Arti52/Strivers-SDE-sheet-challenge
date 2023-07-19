// Time Complexity (n!*n) beats 70% and space Complexity->O(n*n!) beats 50%.
#include <bits/stdc++.h> 
vector<string> findPermutations(string &s) {
    if(s=="")
      return {""};
    vector<string> ans;
    ans.push_back({s[0]});
    for(int i=1;i<s.size();i++)
    {
        vector<string> temp;
        for(int j=0;j<ans.size();j++)
        {
           
           auto y=ans[j];
           int len=y.length();
           for(int k=0;k<=len;k++)
           {
               y.insert(y.begin()+k,s[i]);
               temp.push_back({y});
               y=ans[j];
           }

        }
      ans=temp;
    }
      return ans;
   
}
