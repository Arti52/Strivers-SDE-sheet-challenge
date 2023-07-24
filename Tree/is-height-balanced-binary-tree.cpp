//Striver Approach Time COmplexity->O(N) beats 100% Space Complexity->O(N) beats 100%.
int  check(BinaryTreeNode<int>* root)
{
   if(root==NULL)
      return 0;
   int LH=check(root->left);
   if(LH==-1)return -1;
   int RH=check(root->right);
   if(RH==-1)return -1;
   if(abs(LH-RH)>1)
      return -1;
    return max(LH,RH)+1;;  
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    return check(root)!=-1;
}
