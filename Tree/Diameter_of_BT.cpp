//Striver approach 21% beats in Time Complexity and 91% in Space.
int height(TreeNode<int> *root,int &dia)
{
    if(root==NULL)return 0;
    int lh=height(root->left,dia);
    int rh=height(root->right,dia);
    dia=max(dia,lh+rh);
    return max(lh,rh)+1;

}

int diameterOfBinaryTree(TreeNode<int> *root)
{
	int dia=0;
    height(root,dia);
    return dia;
}
