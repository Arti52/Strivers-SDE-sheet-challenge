//Striver Approach Time Complexity->O(N) beats 85% and Space Complexity ->O(H)*2~O(H) beats 99%.
class BSTIterator {
    stack<BinaryTreeNode<int> *>temp;
    bool reverse = true; 
public:
    BSTIterator(BinaryTreeNode<int> *root, bool isReverse) {
        reverse = isReverse; 
        pushAll(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !temp.empty();
    }

    /** @return the next smallest number */
    int next() {
        BinaryTreeNode<int> *tmpNode = temp.top();
        temp.pop();
        if(!reverse) pushAll(tmpNode->right);
        else pushAll(tmpNode->left);
        return tmpNode->data;
    }

private:
    void pushAll(BinaryTreeNode<int> *node) {
        for(;node != NULL; ) {
             temp.push(node);
             if(reverse == true) {
                 node = node->right; 
             } else {
                 node = node->left; 
             }
        }
    }
};

bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
  if(!root) return false; 
        BSTIterator l(root, false); 
        BSTIterator r(root, true); 
        int i = l.next(); 
        int j = r.next(); 
        while(i<j) {
            if(i + j == k) return true; 
            else if(i + j < k) i = l.next(); 
            else j = r.next(); 
        }
        return false; 
}
