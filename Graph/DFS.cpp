//Striver Approach Time complexity->O(E+V) beats 90% and Space Complexity ->O(N)+O(2*E) beats 60%.
void dfs(int node,vector<int>adj[],vector<int>&vis,vector<int>&temp)
{
   vis[node]=1;
   temp.push_back(node);
   for(auto it:adj[node])
   {
       if(!vis[it])
          dfs(it,adj,vis,temp);
   }


}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
 {
     vector<int> vis(V);
     vector<vector<int>> ans;
     vector<int>adj[V];
     int i=0;
     for(int i=0;i<edges.size();i++)
     {
         adj[edges[i][0]].push_back(edges[i][1]);
         adj[edges[i][1]].push_back(edges[i][0]);
     }
    for(int i=0; i<V;i++){
        if(!vis[i]){
            vector<int>temp;
            dfs(i,adj,vis,temp);
            ans.push_back(temp);
        }
    }
     return ans;
}
