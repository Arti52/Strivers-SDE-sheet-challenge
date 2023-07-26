//Striver approach Time Complexity->O(9*N*M)+O(N*M)~O(N*M) beats 14% and space complexity->O(N*M)+O(N*M) for visited matrix and queue beats 40%.
#include<bits/stdc++.h>
 void bfs(int row,int col,vector<vector<int>> &vis,int **arr,int n,int m)
 {  
   vis[row][col]=1;
   queue<pair<int,int>> q;
   q.push({row,col});
    int drow[8]={-1,-1,0,+1,+1,+1,0,-1};
    int dcol[8]={0,+1,+1,+1,0,-1,-1,-1};
    while(!q.empty())
    {
       int crow=q.front().first;
       int ccol=q.front().second;
       q.pop();
       for(int i=0;i<8;i++)
       {
          int nrow=crow+drow[i];
          int ncol=ccol+dcol[i];
          if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&arr[nrow][ncol]==1&&!vis[nrow][ncol])
          {
             q.push({nrow,ncol});
             vis[nrow][ncol]=1;
          }
       }
    }


 }

int getTotalIslands(int **arr, int n, int m) {
   int island=0;
   vector<vector<int>> vis(n,vector<int>(m,0));
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
         if(!vis[i][j]&&arr[i][j]==1)
         {
            vis[i][j]=1;
            island++;
            bfs(i,j,vis,arr,n,m);
         }
      }
   }
return island;

}
