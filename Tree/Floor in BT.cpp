//Striver Approach Time Complexity->O(H) beats 30% and Space Complexity->O(1) beats 100%.
int floorInBST(TreeNode<int> * root, int X)
{
    int floor=-1;
    while(root){
        if(root->val==X)
        {
            floor=root->val;
            return floor;
        }
        else if(root->val<X)
        {
            floor=root->val;
            root=root->right;
        }
        else
            root=root->left;
    }
      
   return floor;
}
