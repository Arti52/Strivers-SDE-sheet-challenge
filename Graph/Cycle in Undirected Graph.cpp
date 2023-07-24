//Apna College Approac Time Complexity->O(N) beats 75% and space Complexity->O(N) beats 95%.
bool iscycle(int src,vector<vector<int>>&adj,vector<bool> &vis,int parent)
{
    vis[src]=true;
    for(auto it:adj[src])
    {
        if(!vis[it]){
            if(iscycle(it,adj,vis,src)) return true;
        }
        else if(it!=parent) return true;
    }
    return false;
    
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
   vector<vector<int>> adj(n+1);
   for(int i=0;i<m;i++)
   {  
   
    adj[edges[i][0]].push_back(edges[i][1]);
    adj[edges[i][1]].push_back(edges[i][0]);
    
   }
   //string cycle="NO";
   vector<bool> vis(n+1,false);
   for(int i=1;i<=n;i++)
   {
       if(!vis[i]&&iscycle(i,adj,vis,-1)) return "Yes" ;
         
   }
   return "No";
}
