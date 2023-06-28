// Easy approach//
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *curr=head,*prev=NULL,*next_temp;
    while(curr)
    {
        next_temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next_temp;
    }
    return prev;

}
