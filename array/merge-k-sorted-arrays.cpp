#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
     vector<int> v;
    for(int i=0; i<k; i++){
        for(int j=0; j<kArrays[i].size(); j++){
            v.push_back(kArrays[i][j]);
        }
    }
        sort(v.begin(), v.end());
        return v;
}
