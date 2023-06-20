//*simple nd easy to understand with very good time nd space complexity(optimal code)*//
   Node *findMiddle(Node *head) {
    int n=0;
    Node*curr=head;
    while(curr)
    {
        n++;
        curr=curr->next;
    }
    curr=head;
    n=n/2;
    while(n--)
    {
        curr=curr->next;
    }
    head=curr;
    return head;
}
