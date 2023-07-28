//(study with saumya Approach) Time Complexity->O(N) beats 89% and Space Complexity->O(1) beats 75%.
int minCharsforPalindrome(string str) {
	int i=0;
	int j=str.size()-1;
	int trim=j,ans=0;
	while(i<j)
	{
		if(str[i]==str[j])
		{
			i++;
			j--;
		}
		else
		{ 
			ans++;
			i=0;
			j=--trim;
		}

	}
	return ans;
	
}
