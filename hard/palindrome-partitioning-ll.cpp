#include <bits/stdc++.h> 
bool ispalin(int i, int j,string str){
    while(i<j){
        if(str[i]!=str[j])return false;
        i++;
        j--;
    }
    return true;
}
int f(int i,int n,string str, vector<int>&dp){
    if(i==n){
        return 0;
    }
    int mincut=INT_MAX;
    if(dp[i]!=0)return dp[i];
    for(int j=i;j<n;j++){
        if(ispalin(i,j,str)){
            int cut=1+f(j+1, n, str, dp);
            mincut=min(mincut,cut);
        }
    }
    return dp[i]=mincut;
}
int palindromePartitioning(string str) {
    // Write your code here
    int n=str.size();
    vector<int>dp(n,0);
    return f(0,n,str,dp)-1;
}

 
