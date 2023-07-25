//my Approach Time Complexity O(N) beats 15 % and Space Complexity O(N) beats 18%.
vector<int> stringMatch(string text, string pattern) {
	vector<int> ans;
	int n=text.length(),m=pattern.length();
	for(int i=0;i<n;i++)
	{
		if(text[i]==pattern[0])
		{
			string temp=text.substr(i,m);
             if (temp == pattern) 
			 {
                 ans.push_back(i+1);
             }   
        }
	}
	return ans;

}
//2.Approach will study robin algorithm.
