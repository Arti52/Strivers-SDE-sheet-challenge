//if n*m may be even or odd Time Complexity->O(n*mLog(n*m))+O(n*m) beats 23% space Complexity->O(n*m) beats 50%.
#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n=matrix.size(),m=matrix[0].size();
    vector<int> v(n*m);
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v[k]=matrix[i][j];
            k++;
        }
    }
    sort(v.begin(),v.end());
    int mid;
    if ((n * m) % 2 == 1) {
      mid = ((n * m) + 1)/2;
      return v[mid-1];
    }
    else
    {
         mid = (n * m)/2;
         int ans=(v[mid-1]+v[mid])/2;
         return ans;
    }
    return -1;
}
//if(n*m) always odd Time Complexity->O(n*mLog(n*m))+O(n*m) beats 26% space Complexity->O(n*m) beats 50%.
#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n=matrix.size(),m=matrix[0].size();
    vector<int> v(n*m);
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v[k]=matrix[i][j];
            k++;
        }
    }
    sort(v.begin(),v.end());
    int mid = (n * m)/2;
    return v[mid];
}
