//O(N) time complexity and O(N) Space Complexity.
#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int> NGE(n);
    stack<int> s;
    for(int i=n-1;i>=0;i--)
    { 
        while(!s.empty()&&s.top()<=arr[i])
            s.pop();
        if(i<n)
        {
            if(s.empty())
              NGE[i]=-1;
             else
              NGE[i]=s.top();
        }
        s.push(arr[i]);

    }
   return NGE;

}
