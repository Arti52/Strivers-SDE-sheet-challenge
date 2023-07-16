//Time Complexity->O(N) and space Complexity->O(N);
#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
   int max_act=1;
   vector<pair<long,long>> v;
   for (int i = 0; i < start.size(); i++) {
       v.push_back({ finish[i],start[i]});
   }
   sort(v.begin(),v.end());
   int prev=v[0].first;
   for(int i=1;i<start.size();i++)
   {
     if (v[i].second >= prev) {
          max_act++;
          prev=v[i].first;
        }
   }
   return max_act;
}
