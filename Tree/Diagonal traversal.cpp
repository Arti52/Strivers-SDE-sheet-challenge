//Time Complexity O(N) and space Complexity O(N);
vector<int> diagonal(Node *root)
{  
  vector<int> diag;
  if(root==NULL)
     return diag;
  queue<Node*>q;
  q.push(root);
  while(!q.empty())
  {
      Node *curr=q.front();
      q.pop();
      while(curr){
          if(curr->left)
            q.push(curr->left);
          diag.push_back(curr->data);
          curr=curr->right;
      }
  }
  
  return diag;
}
