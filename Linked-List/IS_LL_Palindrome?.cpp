//just total no of nodes then find mid element nd reverse from this mid element then ccompare from head nd mid node data if any instance data is not equal retur false otherwise return true in the end//
LinkedListNode<int> *reverse(LinkedListNode<int> *head)
{
   if(head==NULL)
      return NULL;
    LinkedListNode<int> *curr=head,*prev=NULL,*Next;
    while(curr)
    {
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL)
      return true;
    int n=0;
    LinkedListNode<int> *middle=head;
    while(middle)
    {
        n++;
        middle=middle->next;
    }
    n=n/2;
   middle=head;
    while(n--)
    {
        middle=middle->next;
    }
    middle=reverse(middle);
    while(middle)
    {
        if(middle->data!=head->data)
           return false;
        head=head->next;
        middle=middle->next;
    }
    return true;
}
