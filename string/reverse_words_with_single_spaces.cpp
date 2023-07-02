//My approach 87% beats in time complexity and 36 % in space;
string reverseString(string &str){
	// Write your code here.
	vector<string> ans;
	string s="";

	for(int i=0;i<str.size();i++)
	{
          if (str[i] ==32 && s !="") {
            ans.push_back(s);
            s = "";
          } else if(str[i]!=32)
               s += str[i];
	}
	if(s!="")
	  ans.push_back(s);
	str.clear();
	reverse(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	    {
			str+=ans[i];
			str+=32;
		}
	    
	return str;
}
