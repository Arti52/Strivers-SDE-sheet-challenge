//Striver Approach Time Complexity->O(N) beats 100% and Space complexity->O(1) beats 98%.
class Treenode{
 public:
   int maxNode,minNode,maxSize;
   Treenode(int minNode, int maxNode, int maxSize) 
    {
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};
Treenode *largestSubtreehelper(TreeNode<int> *root) {
  if (root == NULL)
    return new Treenode(INT_MAX, INT_MIN,0);
  auto left = largestSubtreehelper(root->left);
  auto right = largestSubtreehelper(root->right);
  if (left->maxNode < root->data && root->data < right->minNode)
    return new Treenode(min(root->data, left->minNode),max(root->data, right->maxNode),left->maxSize + right->maxSize + 1);
  return new Treenode(INT_MIN,INT_MAX, max(left->maxSize, right->maxSize));
}
  int largestBST(TreeNode<int> *root) {
    return largestSubtreehelper(root)->maxSize;
  }
