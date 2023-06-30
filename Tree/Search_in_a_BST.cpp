//just traversal tree nd storing node value in a vector then find wheather required no is present or not in BST 82% beats in time nd 94% in memory.
void preorder(BinaryTreeNode<int> *root,vector<int> &v)
{
    if(root==NULL)
      return;
    v.push_back(root->data);
    preorder(root->left,v);
    preorder(root->right,v);
}

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    vector<int> v;
    preorder(root,v);
    auto it=find(v.begin(),v.end(),x);
    if(it!=v.end())
       return true;
   return false;
}
