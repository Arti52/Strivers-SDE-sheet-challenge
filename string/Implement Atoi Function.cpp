//Time Complexity->O(N) beats 27% and space complexity->O(1) beats 34%.
#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    int ans;
    string s;
    for(int i=0;i<str.size();i++)
    {
        if((str[i]>=48&&str[i]<=57)||str[i]=='-')
        {
            s+=str[i];
        }
    }
    if(s=="")return -1;
    ans=stoi(s);
    return ans;

}
