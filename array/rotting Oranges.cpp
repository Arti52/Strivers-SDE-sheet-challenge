//Striver Approach (BFS Traversal) Time Complexity->O(N*M)+O(4*(N*M))~O(N*M)  beats 40% ,Space Complexity->O(N*M) beats 33%#include<bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
   queue<pair<pair<int,int>,int>> q;
   int vis[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(grid[i][j]==2){
              q.push({{i,j},0});
              vis[i][j]=2;
              }
        else
        {
            vis[i][j]=0;
        }
       }
   }
   int time=0;
   int drow[]={-1,0,+1,0};
   int dcol[]={0,+1,0,-1};
  while(!q.empty())
  {
     int row=q.front().first.first;
     int col=q.front().first.second;
     int t=q.front().second;
     time=max(time,t);
     q.pop();
     for(int i=0;i<4;i++)
     {
         int nrow=row+drow[i];
         int ncol=col+dcol[i];
         if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&vis[nrow][ncol]!=2&&grid[nrow][ncol]==1)
         {
             vis[nrow][ncol]=2;
             q.push({{nrow,ncol},t+1});
         }
     }

  }

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(vis[i][j]!=2&&grid[i][j])
            return -1;
      }
  }

   return time;

}
