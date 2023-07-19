//time Complexity->O(N)+O(NlogN) beats 34% and space Complexity->O(N) ->beats 100%.
#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    double maxval=0;
    vector<pair<double, int>> v;
    for(int i=0;i<n;i++)
    {   
        double ratio=(items[i].second*1.0)/(items[i].first*1.0);
        v.push_back({ratio,i});
    }
    sort(v.begin(),v.end(),greater<pair<double,int>>());
    for(int i=0;i<n;i++)
    {
      if (items[v[i].second].first<w) {
        maxval += items[v[i].second].second;
        w-= items[v[i].second].first;
      }
      else
      { 
          double x=w*1.0;
          maxval+=v[i].first*x;
          break;
      }
        
    }
    return maxval;
}
