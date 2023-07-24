//Striver Approach Time Complexit->O(3N)~O(N) beats 100% and Space Complexity->O(1) beats 100%.
TreeNode<int>* build(vector<int>& pre, int& i, int ubound) {
        if (i == pre.size() || pre[i] > ubound) return NULL;
        TreeNode<int>* root = new TreeNode<int>(pre[i++]);
        root->left = build(pre, i, root->data);
        root->right = build(pre, i, ubound);
        return root;
    }
TreeNode<int>* preOrderTree(vector<int> &preOrder){
        int i = 0;
        return build(preOrder, i, INT_MAX);
}
