//1. O(N) time(beats 44%) complexity and O(1)(beats 98.7%) space complexity.
#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]!=str2[i])
           return false;
    }
    return true;
}
//2. O(N) time(beats 44%) complexity and O(N)(beats 98.7%) space complexity.
#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
     if(str1.length()!=str2.length()) return false;
    unordered_map<char, int> mp;
    for(char c:str1) mp[c]++;
    for(char c:str2){
        mp[c]--;
        if(mp[c]<0) return false;
    } 
    return true;
}

    return true;
}
