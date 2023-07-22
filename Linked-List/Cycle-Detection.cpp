//Fraz Approach Time Complexity->O(N) beats 43% and space Complexity O(1) beats 36 %.
bool detectCycle(Node *head)
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
            return true ;
    }
  return false;
}
