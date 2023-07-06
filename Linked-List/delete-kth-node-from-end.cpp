//1. Approach 80% beats in Time i.e O(N) and 35 % beat in space;
Node* removeKthNode(Node* head, int K)
{
    Node *temp=head;
    int n=0;
    while(temp)
    {
        n++;
        temp=temp->next;
    }
    int del_node=n-K;
    if(del_node==0)
      return head->next;
    temp=head;
    while(--del_node)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;

}
