//Striver Approach Time Complexity->O(H) beats 42% and Space Complexity->O(1) beats 100%.
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	if(root==NULL)
       return root;
    if(root->data<P->data&& root->data<Q->data)
      return LCAinaBST(root->right,P,Q);
    if(root->data>P->data&& root->data>Q->data)
      return LCAinaBST(root->left,P,Q);
    return root;

}
