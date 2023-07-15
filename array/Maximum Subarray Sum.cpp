//Striver approach O(N) time complexity beats 69% and O(1) space complexity beats 38%.
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long  sum=0;
    long long max_sum=LONG_MIN;
    for(int i=0;i<n;i++)
    { 
        sum+=arr[i];
        if(sum>max_sum)
        {
            max_sum=sum;
        }
        if(sum<0)
        {
            sum=0;
        }

    } 
    if(max_sum<0)
       max_sum=0;
    return max_sum;
}
