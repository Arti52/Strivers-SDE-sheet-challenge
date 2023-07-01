//striver approach 76% beats in time complexity nd 99.6 % beats in space complexity.
void preorder(TreeNode<int> *root,int level, vector<int> &left_view)
 {
    if(root==NULL)
       return;
    if(level==left_view.size())
        left_view.push_back(root->data);
    preorder(root->left,level+1,left_view);
    preorder(root->right,level+1,left_view);
    
}
 
    

vector<int> getLeftView(TreeNode<int> *root)
{
   vector<int> left_view;
   preorder(root,0,left_view);
   return left_view;
}
