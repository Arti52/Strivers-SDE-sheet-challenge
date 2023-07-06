//Striver Approach 94% beats in Time Complexity as O(N) and 33% beats in space.
#include<bits/stdc++.h>
TreeNode<int> *help(vector<int> &inorder,int instart,int inend,vector<int> &postorder,int pstart,int pend,unordered_map<int,int>&mp)
{
    if(instart>inend||pstart>pend) return NULL;
    TreeNode<int> *root=new TreeNode<int>(postorder[pend]);
    int inroot=mp[root->data];
    int numleft=inroot-instart;
    root->left=help(inorder,instart,inroot-1,postorder,pstart,pstart+numleft-1,mp);
    root->right=help(inorder,inroot+1,inend,postorder,pstart+numleft,pend-1,mp);
    return root;

}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{  
   if(inOrder.size() != postOrder.size())return NULL;
   unordered_map<int,int> mp;
    for(int i=0;i<inOrder.size();i++)
    {
        mp[inOrder[i]]=i;
    }
    return help(inOrder,0,inOrder.size()-1,postOrder,0,postOrder.size()-1,mp);
}
