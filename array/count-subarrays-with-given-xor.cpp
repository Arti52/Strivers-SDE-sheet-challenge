#include <bits/stdc++.h>
int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int,int> m;
    m[0]=1;
    int count=0;
    int xorr=0;
    for(int i=0;i<arr.size();i++){
    xorr^=arr[i];
    if(m.find(xorr^x)==m.end())m[xorr]++;
    else {
    count += m[xorr ^ x];
    m[xorr]++;
        }
    }
    return count;
}
