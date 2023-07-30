#include <bits/stdc++.h> 
int distinctSubstring(string &word) {
    // Write your code here.
    set<string> ans;
    
    int l = word.length();
    
    for(int i=0; i<l; ++i){
        for(int j=1; j<=l; ++j){
            string t = word.substr(i,j);
            ans.insert(t);
        }
    }
    return ans.size();
}
