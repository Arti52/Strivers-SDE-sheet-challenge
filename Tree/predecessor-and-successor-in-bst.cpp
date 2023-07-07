// just use inorder traversal beats 99% in Time Complexity and 96% beats in Space.
void inorder(BinaryTreeNode<int>* root,vector<int> &v)
{
    if(root==NULL)return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
    
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    vector<int> ans_v;
   int pre=-1,succ=-1;
    inorder(root,ans_v);
    for(int i=0;i<ans_v.size();i++)
    {
        if(ans_v[i]==key)
        {
            if(i-1>=0)
              pre=ans_v[i-1];
            if(i+1<ans_v.size())
              succ=ans_v[i+1];
              
        }
    }
    return {pre,succ};
}
