//Time Complexity->O(N) beats 86% and Space Complexity->O(1) beats 100%.
void binarytoDLL(BinaryTreeNode<int>* root,BinaryTreeNode<int>*&head,BinaryTreeNode<int>*&prev)
{
    if(root==NULL)return ;
    binarytoDLL(root->left,head,prev);
    if(prev==NULL)
    {
       head=root;
       prev=root;
    }
    else
    {
        prev->right=root;
        root->left=prev;
        prev=prev->right;
    }
     binarytoDLL(root->right,head,prev);
       
}

BinaryTreeNode<int> *BTtoDLL(BinaryTreeNode<int> *root) {
    BinaryTreeNode<int> *head=NULL;
    BinaryTreeNode<int>*prev=NULL;
    binarytoDLL(root,head,prev);
    return head;

}
