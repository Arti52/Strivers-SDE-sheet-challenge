//O(n^3) time complexity beats 63% and O(1) space Complexity beats 97%
#include <bits/stdc++.h>
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {   
            int low=j+1;
            int high=n-1;
            while (low <= high) {
              int sum = arr[i] + arr[j] + arr[low] + arr[high];
              if (sum == target)
                return "Yes";
              if (sum > target)
                high--;
              else
                low++;
            }
        }
    }
    return "No";
}
