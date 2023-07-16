//striver approach Time Complexity->O(N)+O(2E) beats 80% and Space Complexity O(3N)~O(N) beats 84%.
#include <bits/stdc++.h> 
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
       // Write your code here
    int n = vertex;
    int m = edges.size();

    vector<int> adj[n];
    for(int i=0;i<m;i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0;i<n; i++){
        sort(adj[i].begin(), adj[i].end());
    }

   vector<int> bfs;
   vector<int> vis(n,0);
   vis[0]=1;
   queue<int> q;
   q.push(0);
   while (!q.empty()) {
     int node = q.front();
     q.pop();
     bfs.push_back(node);
     for(auto x:adj[node])
     {
        if(!vis[x])
        {
            vis[x]=1;
            q.push(x);
        }

     }
   }
   for(int i=0;i<n;i++)
   {
      if(vis[i]==0)
        bfs.push_back(i);
   }
   return bfs;
}
