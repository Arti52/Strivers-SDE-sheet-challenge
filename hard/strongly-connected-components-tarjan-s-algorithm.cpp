#include<bits/stdc++.h>
void dfs1(unordered_map<int,vector<int>>&adj,stack<int>&stk,vector<bool>&vis,int curr) {
    vis[curr]=true;
    for(auto it:adj[curr]) {
        if(!vis[it]) {
            dfs1(adj,stk,vis,it);
        }
    }
    stk.push(curr);
}
void dfs2(unordered_map<int,vector<int>>&adj,vector<int>&tmp,vector<bool>&vis,int curr) {
    vis[curr]=true;
    tmp.push_back(curr);
    for(auto it:adj[curr]) {
        if(!vis[it]) {
            dfs2(adj,tmp,vis,it);
        }
    }
}
vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &edges) {
    // Construct the graph
    unordered_map<int,vector<int>>adj;
    for (auto it : edges) {
        adj[it[0]].push_back(it[1]);
    }
    // Do a random order dfs and store vertices while backtracking
    stack<int>stk;
    vector<bool>vis(n,false);
    for(int i=0;i<n;i++) {
        if(!vis[i]) {
            dfs1(adj,stk,vis,i);
        }
    }
    // Reverse the edges and construct a new graph
    unordered_map<int,vector<int>>revAdj;
    for (auto it : edges) {
        revAdj[it[1]].push_back(it[0]);
    }
    // Pop from stack and do dfs and store the SCCs
    vector<vector<int>>ans;
    fill(vis.begin(),vis.end(),false);
    while(!stk.empty()) {
        int node=stk.top();
        stk.pop();
        if(!vis[node]) {
            vector<int>tmp;
            dfs2(revAdj,tmp,vis,node);
            ans.push_back(tmp);
        }
    }
    // return the answer
    return ans;
}
