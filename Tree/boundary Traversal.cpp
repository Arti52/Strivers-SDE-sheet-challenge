// striver Approach  Taking Time complexity O(H)+O(H)+O(N)~O(N) beats 45% and Space complexity O(N) beats 48%.
#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
bool isLeaf(TreeNode<int> * root) {
  return (root -> left==NULL && root -> right==NULL);
}

void LeftBoundary(TreeNode<int> * root, vector<int>& ans) {
  TreeNode<int> * cur = root ->left;
   while (cur) {
    if (!isLeaf(cur)) ans.push_back(cur ->data);
    if (cur -> left) cur = cur -> left;
    else cur = cur->right;
  }
}
void RightBoundary(TreeNode<int> * root, vector <int>&ans) {
 TreeNode<int> *cur = root ->right;
  stack<int> tmp;
  while (cur) {
    if (!isLeaf(cur)) tmp.push(cur -> data);
    if (cur -> right) cur = cur -> right;
    else cur = cur->left;
  }
  while(!tmp.empty())
  {
     int x=tmp.top();
     tmp.pop();
     ans.push_back(x);
  }
  
}

void Leaves(TreeNode<int> * root,vector <int>&ans) {
  if (isLeaf(root)) {
    ans.push_back(root -> data);
    return;
  }
  if (root -> left) Leaves(root -> left,ans);
  if (root -> right)Leaves(root -> right,ans);
}

vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
  vector < int > ans;
  if (!root) return ans;
  if (!isLeaf(root)) ans.push_back(root -> data);
  LeftBoundary(root,ans);
  // add leaf nodes
  Leaves(root, ans);
  RightBoundary(root, ans);
  return ans;
}
