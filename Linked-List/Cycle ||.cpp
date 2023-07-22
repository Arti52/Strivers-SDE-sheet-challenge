//Fraz approach time Complexity-> O(N) beats 10% and Space Complexity-> beats 38%.
Node *firstNode(Node *head)
{
    Node *slow = head ;
    Node *fast = head ;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next ;
        // Fast Pointer moves with a speed double that speed of Slow pointer
        fast = fast -> next -> next ;
        // If Slow & Fast pointer meets, then there's a Cycle in the LinkedList
        if(slow == fast)
            break ;
    }

    // If our Fast becomes NULL or our Fast's Next Node is NULL, it means there's No Loop in the LinkedList
    if(fast == NULL || fast -> next == NULL)
        return NULL ;
    // To find the starting point of the Loop, ptr1 starts from head while ptr2 starts from slow
    Node *ptr1 = head ;
    Node *ptr2 = slow ;
    while(ptr1 != ptr2)
    {
        // Ptr1 & Ptr2 moves with the same speed
        ptr1 = ptr1 -> next ;
        ptr2 = ptr2 -> next ;
    }
    // At the end, both Ptr1 or Ptr2 will point to the starting Node of the LinkedList Cycle / Loop
    return ptr1 ;

}
