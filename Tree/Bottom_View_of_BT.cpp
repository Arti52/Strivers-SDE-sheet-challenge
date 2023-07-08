//Striver Approach Beats 98% in Space.
#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

   vector<int> ans;
      if(root==NULL)
         return ans;
      queue<pair<BinaryTreeNode<int>*,int>> q;
      map<int,int> mp;
      q.push({root,0});
      while(!q.empty())
      {
        BinaryTreeNode<int> *root=q.front().first;
          int line=q.front().second;
          q.pop();
              mp[line]=root->data;
          if(root->left!=NULL)
             q.push({root->left,line-1});
          if(root->right!=NULL)
             q.push({root->right,line+1});
      }
      for(auto x:mp)
      {
          ans.push_back(x.second);
      }
      return ans;
    
}
