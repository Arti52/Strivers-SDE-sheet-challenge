//Striver approach time Complexity->O(V+E) beats 86% and Space Complexity->O(N)+O(N)~O(N) beats 88%.
#include <bits/stdc++.h>
void dfs(int node,vector<int> adj[],int vis[],stack<int> &tmp)
{
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
          dfs(it,adj,vis,tmp);
    }
      tmp.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e) {
      stack<int> tmp;
      vector<int> ans;
      int vis[v]={0};
      vector<int> adj[v];
      for(int i=0;i<edges.size();i++)
      {
          adj[edges[i][0]].push_back(edges[i][1]);
      }
       for(int i=0;i<v;i++)
       {
           if(!vis[i])
           {
               dfs(i,adj,vis,tmp);
           }
       }
        while(!tmp.empty())
        {
            ans.push_back(tmp.top());
            tmp.pop();
        }
        return ans;
}
