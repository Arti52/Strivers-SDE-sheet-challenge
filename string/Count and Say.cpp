//Time complexity->O(N*leng of ans string)  beats 83% nd space Complexity->O(1) beats 100%.
#include <bits/stdc++.h> 
string writeAsYouSpeak(int n) 
{
   if(n==1) return "1";
   if(n==2) return "11";
   string ans="11";
  for(int i=3;i<=n;i++)
  {
	  string temp="";
	  ans+="&";
	  int count=1;
	  for(int j=1;j<ans.size();j++)
	  {
		  if(ans[j]!=ans[j-1])
		  {
       temp+=to_string(count);
			 temp+=ans[j-1];
			 count=1;
		  }
		  else 
		    count++;
	  }
	  ans=temp;
  }
  return ans;
}
