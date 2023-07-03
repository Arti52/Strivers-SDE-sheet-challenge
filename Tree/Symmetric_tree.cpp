//Striver Approach simultaneouly check left nd right vales 98.8% beats in time complexity and 46.6%in spaceComplexity.
bool help(BinaryTreeNode<int>* left_root,BinaryTreeNode<int>* right_root)
{
    if(left_root==NULL||right_root==NULL)
      return left_root==right_root;
    if(left_root->data!=right_root->data) return false;
    return help(left_root->left,right_root->right)&&help(left_root->right,right_root->left);
}


bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.  
    return root==NULL||help(root->left,root->right);

}
