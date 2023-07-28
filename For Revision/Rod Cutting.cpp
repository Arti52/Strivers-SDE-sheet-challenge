//Striver approach Time Complexity->O(N*N) beats 70% and Space Complexity->O(N*N)+O(target) beats 50%.
#include<bits/stdc++.h>
int help(int ind,int n,vector<int> &price,vector<vector<int>> &dp)
{
	if(ind==0)
	  return price[0]*n;
	  if(dp[ind][n]!=-1)return dp[ind][n];
	int notTake=0+help(ind-1,n,price,dp);
	int take=INT_MIN;
	int rodlen=ind+1;
	if(rodlen<=n)
	  take=price[ind]+help(ind,n-rodlen,price,dp);
	return dp[ind][n]= max(take,notTake);
}

int cutRod(vector<int> &price, int n)
{   
	vector<vector<int>> dp(n,vector<int>(n+1,-1));
	return help(n-1,n,price,dp);
}
