//Striver Approach 80% beats in Space.
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
     vector<int> ans;
      if(root==NULL)
         return ans;
      queue<pair<TreeNode<int>*,int>> q;
      map<int,int> mp;
      q.push({root,0});
      while(!q.empty())
      {
         TreeNode<int> *root=q.front().first;
          int line=q.front().second;
          q.pop();
          if(mp.find(line)==mp.end())
          {
              mp[line]=root->val;
          }
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
