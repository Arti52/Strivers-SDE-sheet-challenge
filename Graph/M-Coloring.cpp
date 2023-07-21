//striver Approach Time Complexity->O(N^m) beats 90% and Space Complexity->O(N)+O(N) beats 17%.
bool issafe(int node,int color[],vector<vector<int>> &mat,int n, int col)
{
    for(int i=0;i<n;i++)
    {
        if(i!=node&&mat[i][node]==1&&color[i]==col)
           return false;
    }
    return true;
}
bool solve(int node,int color[],vector<vector<int>> &mat,int n, int m)
{
    if(node==n)
       return true;
    for(int j=1;j<=m;j++)
    {
        if(issafe(node,color,mat,n,j))
        {   
            color[node]=j;
            if(solve(node+1,color,mat,n,m))
               return true;
            color[node]=0;
        }
    }
    return false;
}


string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
           int n=mat.size();
           int color[n]={0};
           if(solve(0,color,mat,n,m))
              return "YES";
            return "NO";


}
