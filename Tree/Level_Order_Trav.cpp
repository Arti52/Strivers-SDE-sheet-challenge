//Easy approach using Queue nd vector
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
   
    vector<int> ans;
    if(root==NULL) return ans;
   queue<BinaryTreeNode<int>*> q;
   q.push(root);
   while(!q.empty())
   {
       BinaryTreeNode<int> * temp=q.front();
       ans.push_back(temp->val);
       if(temp->left)
          q.push(temp->left);
       if(temp->right)
          q.push(temp->right);
       q.pop();
   }

    return ans;
