Time Complexity->O(N) beats 98% and Space Complexity->O(1) beats 52%.
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
     int e=-1;
    int larsub=0;
    vector<int> charpos(26,-1);
    for(int i=0;i<input.length();i++){
        int pos=input[i]-'a';
        if(e<charpos[pos])
        e=charpos[pos];
        charpos[pos]=i;
        larsub=max(larsub,i-e);
    }
    return larsub;
}
