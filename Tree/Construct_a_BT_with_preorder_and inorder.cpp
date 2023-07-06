//Striver approach 66% beats in Time in O(N) and 99.7% beats in Space i.e O(1)
TreeNode<int> *help(vector<int> &inorder,int instart,int inend,vector<int> &preorder,int pstart,int pend,unordered_map<int,int>&mp)
{
    if(instart>inend||pstart>pend) return NULL;
    TreeNode<int> *root=new TreeNode<int>(preorder[pstart]);
    int inroot=mp[root->data];
    int numleft=inroot-instart;
    root->left=help(inorder,instart,inroot-1,preorder,pstart+1,pstart+numleft,mp);
    root->right=help(inorder,inroot+1,inend,preorder,pstart+numleft+1,pend,mp);
    return root;

}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	unordered_map<int,int> mp;
    for(int i=0;i<inorder.size();i++)
    {
        mp[inorder[i]]=i;
    }
    return help(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,mp);
   
    
}
