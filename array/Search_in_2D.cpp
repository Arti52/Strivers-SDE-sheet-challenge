//First Approach 20% beats in time nd 90 per in memory//
int i=0;
while(i<matrix.size())
        {   
            int low=0,high=matrix[0].size()-1;
            while(low<=high){
             int mid=(high+low)/2;
              if(matrix[i][mid]==target)
                return true;
              else if(target<matrix[i][mid])
                   high=mid-1;
              else
                low=mid+1;
             
           
            }
            i++;
                
        }
        return false;
//Second Approach  20% beats in time nd 95 per in memory//
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n=mat.size(),m=mat[0].size();
    int low=0,high=n*m-1;
    while(low<=high)
    {
       int mid=low+(high-low)/2;
       if(mat[mid/m][mid%m]==target)
          return true;
       else if(target>mat[mid/m][mid%m])
          low=mid+1;
       else 
          high=mid-1;
    }
    return false;
        
}
