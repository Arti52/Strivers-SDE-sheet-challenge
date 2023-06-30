void inorder(BinaryTreeNode<int> *root,vector<int> &v1)
{
    if(root==NULL)
       return;
    inorder(root->left,v1);
    v1.push_back(root->data);
    inorder(root->right,v1);
    

}
void preorder(BinaryTreeNode<int> *root,vector<int> &v2)
{
    if(root==NULL)
       return;
    v2.push_back(root->data);
    preorder(root->left,v2);
    preorder(root->right,v2);
  

}
void postorder(BinaryTreeNode<int> *root,vector<int> &v3)
{
    if(root==NULL)
       return;
    postorder(root->left,v3);
    postorder(root->right,v3);
    v3.push_back(root->data);

}


vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<int> v1,v2,v3;
    inorder(root,v1);
    preorder(root,v2);
    postorder(root,v3);
    return {v1,v2,v3};
}
