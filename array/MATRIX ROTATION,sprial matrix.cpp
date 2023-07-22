// My Approach time Complexity O(n*m) beats 42% aand Space Complexity O(1) beats 97%.
#include <bits/stdc++.h>
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
   int l=0,r=m-1,top=0,botm=n-1;

    while(l<r&&top<botm){
        int temp = mat[top][l];
        for(int col = l+1; col <= r;col++){
            int k = mat[top][col];
            mat[top][col] = temp;
            temp = k;
        }
        top++;

        for(int row=top;row<=botm;row++)
        {
            int k = mat[row][r];
            mat[row][r] = temp;
            temp = k;
        }
        r--;
        for(int col=r;col>=l;col--)
        {
            int k = mat[botm][col];
            mat[botm][col] = temp;
            temp = k;
        }
         botm--;
        for (int row = botm; row >= top; row--) 
        {
          int k = mat[row][l];
          mat[row][l]=temp;
          temp = k;
        }
        l++;
        mat[top - 1][l - 1] = temp;
    }
}
