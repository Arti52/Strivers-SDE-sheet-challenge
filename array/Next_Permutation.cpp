//First Approach //
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int index=-1;
    for(int i=n-2;i>=0;i--)                         //step 1 - find the break point  //
    {
        if(permutation[i+1]>permutation[i])
        {
            index=i;
            break;
        }
    }
    if (index == -1)                                 //if the break point is not there   //
    {
      reverse(permutation.begin(),permutation.end());   //just reverse the array and return the array//
    return permutation;
    }
        for(int i=n-1;i>index;i--)                      //if break point exist ,step 2 - find the next grater element and swap them//
        {
            if(permutation[i]>permutation[index])
            {
                swap(permutation[i],permutation[index]);
                break;
            }
        }
      reverse(permutation.begin()+index+1,permutation.end());  //reverse the right half after the break point and return array//
      return permutation;

}
//Second Approach using stl//
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    next_permutation(permutation.begin(),permutation.end());
    return permutation;
}
