//93% beats Time Comlexity as O(n+m) ans 92 % beats in Space as O(node_creation);
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{   
     Node<int> *new_node=new Node<int>(0);
     Node<int> *sorted=new_node;

    while(first&&second)
    {   
        if(first->data<second->data)
        {
               new_node->next=first;
               first=first->next;
        } else {
             new_node->next = second;
             second = second->next;
        }
        new_node=new_node->next;
    }
       while(first)
        {
            new_node->next=first;
            first=first->next;
            new_node=new_node->next;
        }
        while(second)
        {
            new_node->next=second;
            second=second->next;
            new_node=new_node->next;
        }
        return sorted->next;
       
}
