// Time Complexity-> O(N) beats 74% and space Complexity -> O(N) beats 3%.
#include<bits/stdc++.h>
long long getTrappedWater(long long* arr, int n) {
    // Write your code here.
    long long water=0;
    stack<long long> s;
    for(int i=0;i<n;i++)
    {
       while(!s.empty()&&arr[s.top()]<arr[i])
       {
           long long curr=s.top();
           s.pop();
           if(s.empty()) break;
           long long width=i-s.top()-1;
           water+=(min(arr[i],arr[s.top()])-arr[curr])*width;

       }
       s.push(i);
    }
    return water;
}
