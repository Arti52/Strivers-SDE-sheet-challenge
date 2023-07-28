//Time Complexity->(logN) beats 97 % and Space Complexity->O(1) beats 95%.
#include <bits/stdc++.h> 
bool help(long long dis,vector<int> &arr,int c,int n){
	int plyr=1;
	long long pre_pos = arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]-pre_pos>=dis)
		{
			pre_pos=arr[i];
			plyr++;
		}
		if( plyr==c) return true;

	}
	return false; 
}
int chessTournament(vector<int> positions,int n ,int c)
{
	sort(positions.begin(),positions.end());
	long long low=0;
	long long high=positions[n-1]-positions[0];
	long long ans=-1;
	while(low<=high)
	{
		long long m=low+(high-low)/2;
		if(help(m,positions,c,n))
		{
			low=m+1;
			ans=m;
		}
		else high=m-1;
	}
	return ans;
}
