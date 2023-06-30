//Easy
void preorder(TreeNode *root,vector<int> &v)
{
    if(root==NULL)
       return;
    v.push_back(root->data);
    preorder(root->left,v);
    preorder(root->right,v);

}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> v;
   preorder(root,v);
   return v;
}
