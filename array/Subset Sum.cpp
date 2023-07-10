//Striver Optimal solution 100% (2^n) beats in Time Complexity and take O(2^n(log(2^n)) Space.
#include<bits/stdc++.h>
using namespace std;
void help(int ind,int sum,vector<int> &num,int n,vector<int> &sumsubset)
{
	if(ind==n) {
	  sumsubset.push_back(sum);
	  return;
	}
	help(ind+1,sum+num[ind],num,n,sumsubset);
	help(ind+1,sum,num,n,sumsubset);
}

vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	int n=num.size();	
	vector<int> sumsubset;
	help(0,0,num,n,sumsubset);
	sort(sumsubset.begin(),sumsubset.end());
	return sumsubset;
}
