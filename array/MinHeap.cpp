//Time complexity->O(n) beats 9% and Space comlexity->O(N) beats 98%. 
#include <bits/stdc++.h>
using namespace std;
vector<int> minHeap(int n, vector<vector<int>>& q) 
{
    vector<int> ans;
    vector<int> temp;
    auto start=temp.begin();
    for(int i=0;i<n;i++)
    {
        if(q[i][0]==0)
        {
            temp.push_back(q[i][1]);
            start=min_element(temp.begin(),temp.end());
        }
        else
        {
            ans.push_back(*start);
            temp.erase(start);
        }
    }
    return ans;
}
