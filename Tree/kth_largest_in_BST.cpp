// just storing all nodes value in a vector then sort it in decending order nd return desiered result. 49% beats in Time and 97% in Memory.
void preorder(TreeNode<int> *root,vector<int> &v)
{
    if(root==NULL)
      return;
    v.push_back(root->data);
    preorder(root->left,v);
    preorder(root->right,v);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
   vector<int> v;
   preorder(root,v);
   sort(v.begin(),v.end(),greater<int>());
   int n=v.size();
   if(k>n)
      return -1;
   return v[k-1];
}
