//Striver approach Time Complexity->O(1) beats 65% and Space Complexity->O(H) beats 100%.
class BSTiterator
{  
    private:
    void pushAll(TreeNode<int> *node) {
        while(node != NULL ) {
             temp.push(node);
             
                 node = node->left; 
        }
    }
    public:
     stack<TreeNode<int>*> temp;
    
    BSTiterator(TreeNode<int> *root)
    {
         pushAll(root);
    }

    int next()
    {
        TreeNode<int> *tmpNode = temp.top();
        temp.pop();
        pushAll(tmpNode->right);
        return tmpNode->data;
    }
    bool hasNext()
    {
     return !temp.empty();
    }
};
