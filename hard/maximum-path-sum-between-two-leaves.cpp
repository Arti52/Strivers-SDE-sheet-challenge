#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
long long int help(TreeNode<int>*root,long long int&ans)
{
    if(!root) return -1e9;
    if(!root->left and !root->right) return root->val;
    long long int left=help(root->left,ans);
    long long int right=help(root->right,ans);
    if(left==-1e9 || right==-1e9)
    {
        return max(left,right)+root->val;
    }
    ans=max(ans,left+right+root->val);
    return max(left,right)+root->val;
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    if(!root) return -1;
    long long int ans=-1;
    help(root,ans);
    return ans;

}
