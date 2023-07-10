// Striver Approach ,O(N) Time(60% beats) as well as space(51% beats) complexity 

#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> zigzag;
     if(root==NULL) return zigzag;
      queue<BinaryTreeNode<int>*> q;
      q.push(root);
      bool flag=true;
      while(!q.empty())
     {
        int size=q.size();
        vector<int> row(size);
        for(int i=0;i<size;i++)
        {   
          BinaryTreeNode<int>* curr_node=q.front();
          q.pop();
          int ind=(flag)?i:(size-i-1);
          row[ind]=curr_node->data;
          if(curr_node->left)
            q.push(curr_node->left);
          if(curr_node->right)
            q.push(curr_node->right);
         }
        flag=!flag;
        for(int j=0;j<row.size();j++)
            zigzag.push_back(row[j]);
    }
      return zigzag;
    
}
