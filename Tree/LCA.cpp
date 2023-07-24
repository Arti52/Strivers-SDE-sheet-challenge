//Striver Approach Time Complexity->O(H) beats 70% and Space Complexity O(1) beats 61%.
TreeNode<int> *LCA(TreeNode<int>*root,int &x,int &y)
{
   if(root==NULL or root->data==x or root->data==y) return root;
    TreeNode<int>* leftT = LCA(root->left,x,y);
    TreeNode<int>* rightT = LCA(root->right,x,y);
    if(leftT==NULL) return rightT;
    if(rightT==NULL) return leftT;
    return root;

}

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	TreeNode<int> *node=LCA(root,x,y);
    return node->data;
}
