//Striver Approach Time Complexity->O(min(K,N)) beats 69%,Space Complexity ->O(min(K,N)) beats 61%.
TreeNode<int>* kthsmallest(TreeNode<int>* root,int &k)
  {
	if(root==NULL)
	return NULL;
	TreeNode<int>* left=kthsmallest(root->left,k);
	if(left!=NULL)
	return left;
	k--;
	if(k==0)
	return root;
	return kthsmallest(root->right,k);
   }

int kthSmallest(TreeNode<int> *root, int k)
{
	TreeNode<int>*small= kthsmallest(root,k);
        if(small==NULL)
          return -1;
         return small->data;
    
    
}
