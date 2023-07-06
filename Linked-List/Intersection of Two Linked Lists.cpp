// 1 Approach 32% beats in Time and 20% beats in Space.
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node *head1=firstHead,*head2=secondHead;
    int n1=0,n2=0,diff;
    while(head1)
    {
        n1++;
       head1=head1->next;
    }
    while(head2)
    {
        n2++;
       head2=head2->next;
    }
    if(n1>n2)
    {
        diff=n1-n2;
        head1=firstHead;
        head2=secondHead;
    }
    else
    {  
        diff=n2-n1;
        head1=secondHead;
        head2=firstHead;
    }
    while(diff--)
    {
        head1=head1->next;
        if(head1==NULL) return NULL;
    }
    while(head1&&head2)
    {
        if(head1==head2)
          return head1;
        head1=head1->next;
        head2=head2->next;
    }
    return NULL;
}
// SECOND Approach
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node *head1=firstHead,*head2=secondHead;
    if(head1==NULL||head2==NULL)return NULL;
    while(head1!=head2)
    {
        if(head1==NULL)
           head1=secondHead;
        else
           head1=head1->next;
        if(head2==NULL)
           head2=firstHead;
        else
           head2=head2->next;

    }
    return head1;
}
