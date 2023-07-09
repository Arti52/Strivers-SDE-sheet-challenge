// O(N) Time and space Complexity i.e 40% beats in Time and 98%beats in space.
#include <bits/stdc++.h> 
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> NSE(n);
    stack<int> s;
    for(int i=n-1;i>=0;i--)
    { 
        while(!s.empty()&& s.top()>=arr[i])
            s.pop();
        if(i<n)
        {
            if(s.empty())
              NSE[i]=-1;
             else
              NSE[i]=s.top();
        }
        s.push(arr[i]);

    }
   return NSE;
}
