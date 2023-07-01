//Easy Approach
int findCeil(BinaryTreeNode<int> *node, int x){
   int ceil=-1;
   while(node)
   {
       if(x==node->data)
       {  
           ceil=node->data;
           return ceil;
       }
          
       else if(x<node->data)
       {    
            ceil=node->data;
            node=node->left;
       }
       else
       {
         
          node=node->right;
       }
   }
   return ceil;
}
