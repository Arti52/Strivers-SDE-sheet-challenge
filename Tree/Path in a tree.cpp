//Striver Approach Time Complexity->O(N) beats 10% and Space Complexity->O(H) beats 1%
bool help(TreeNode<int>* root,int &x,vector<int> &ans)
{
	if(root==NULL)
	  return false;
	ans.push_back(root->data);
	if(root->data==x)
	   return true;
	if(help(root->left,x,ans)||help(root->right,x,ans))
	   return true;
	ans.pop_back();
	return false;
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    vector<int> ans;
	if(root==NULL)
	   return ans;
	help(root,x,ans);
	return ans;
}
