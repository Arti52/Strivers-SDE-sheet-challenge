//Striver Approach Time COmplexity->O(N) beats 45% and Space Complexity ->O(1)beats 100%.
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
   
    void flatten(TreeNode<int> * root, TreeNode<int> * &prev) {
      if (root == NULL) return;
      flatten(root -> right,prev);
      flatten(root -> left,prev);
      root -> right = prev;
      root -> left = NULL;
      prev = root;
    }

TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    TreeNode<int> * prev = NULL;
    flatten(root,prev);
    return root;
}
