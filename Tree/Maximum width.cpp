//Time Complexity->O(N) beats 53% and Space Complexity->O(N) beats 97%.
int getMaxWidth(TreeNode<int> *root)
{
    if(root==NULL)
       return 0;
    int ans=0;
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
       int size=q.size();
       ans=max(ans,size);
      
       for(int i=0;i<size;i++)
       {
         
         TreeNode<int>* node=q.front();
         q.pop();
         if(node->left)
            q.push(node->left);
         if(node->right)
            q.push(node->right);
       }

    }
    return ans;
}
