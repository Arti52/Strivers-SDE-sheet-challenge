//Striver Approach Time Complexity->O(V+E) beats 100% and Space Complexity->O(2*N) beats 96%.
bool dfsCheck(int node,vector<int> adj[],int vis[],int pathvis[])
{
  vis[node]=1;
  pathvis[node]=1;
  for(auto it:adj[node])
  {
    if(!vis[it])
    {
           if((dfsCheck(it,adj,vis,pathvis)==1))
              return true;
    }
    else if(pathvis[it])
      return true;
      
  }
  pathvis[node]=0;
  return false;
}


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  vector<int> adj[n+1];
  for (int i = 0; i < edges.size(); i++) {
    adj[edges[i].first].push_back(edges[i].second);
  }
    int vis[n+1]={0};
    int pathvis[n+1]={0};
    for(int i=1;i<=n;i++)
    {
      if (!vis[i]) {
        if (dfsCheck(i, adj, vis, pathvis))
          return true;
      }
    }
  return false;
}
