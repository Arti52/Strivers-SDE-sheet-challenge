//76% beats in Time complexity O(logn) and 100% beats in memory i.e O(1) (Shradda di)
TreeNode<int>* help(vector<int> &arr, int s,int e)
{
     if(s>e)
      return NULL;
    int mid=(s+e)/2;
    TreeNode<int>* root=new TreeNode<int>(arr[mid]);
    root->left=help(arr,s,mid-1);
    root->right=help(arr,mid+1,e);
    return root;
}

TreeNode<int>* sortedArrToBST(vector<int> &arr,int n)
{
    return help(arr,0,n-1);
}
