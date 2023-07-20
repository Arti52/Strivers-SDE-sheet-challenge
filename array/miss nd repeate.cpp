//Time Comlexity->O(N) beats 14% and Space Comlexity->O(N) beats 97%.
#include <bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int miss=0,rep=0;
	unordered_map<int,int> ump;
	for(int i=0;i<n;i++)
	{
         ump[arr[i]]++;
            
	}
	for(int i=1;i<=n;i++)
	{
		if(ump.find(i)==ump.end())
		  {
			  miss=i;
			  break;
		  }
	}
	for(auto x:ump)
	{
          if (x.second == 2) {
            rep = x.first;
            break;
          }
        }
		return {miss,rep};
	
}
