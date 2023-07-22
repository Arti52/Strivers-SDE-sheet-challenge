// Use Level order traversal as  BFS Time Complexity->O(N) beats 96% and space Complexity->O(N) beats 100%.
void connectNodes(BinaryTreeNode< int > *root) {
    queue<BinaryTreeNode< int > *> q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        BinaryTreeNode< int >*prev=NULL;
        for(int i=1;i<=size;i++)
        {
            BinaryTreeNode< int >* curr=q.front();
            q.pop();
            if(prev!=NULL)
            {
                prev->next=curr;
            }
            prev=curr;
            if(curr->left!=NULL)
               q.push(curr->left);
            if(curr->right!=NULL)
               q.push(curr->right);
            if(i==size)
               curr->next=NULL;
        }
    }


}
