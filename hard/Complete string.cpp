#include <bits/stdc++.h> 
class TierNode{
    public:
     TierNode* child[26];
    bool isEnd;
};
void insert(string &w,TierNode* node){
    TierNode* curr = node;
    for(auto c: w){
        if(curr->child[c-'a'] == NULL)curr->child[c-'a'] = new TierNode();
        curr = curr->child[c-'a'];
    }
    curr->isEnd = true;
}
bool isCompStr(string &w,TierNode* node){
    TierNode* curr = node;
    for(auto c: w){
        if(curr->child[c-'a'] == NULL)return false;
        curr = curr->child[c-'a'];
        if(curr->isEnd == false)return false;
    }
    return true;
}
string completeString(int n, vector<string> &a){
    // Write your code here.
    TierNode* node = new TierNode();
    for(auto w: a)insert(w,node);
    string ans = "";
    for(auto w: a){
        if(isCompStr(w,node)){
          if (ans.length() <= w.length()) {
            ans = ans.length() == w.length() ? min(ans, w) : w;
          }
        }
    }
    return ans.length() == 0 ? "None" : ans;
}
