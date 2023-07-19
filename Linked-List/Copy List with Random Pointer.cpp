// 1.Fraz approach with (extra Space) Time Complexity O(N)->beats 16%. ans Space Comlexity O(N)->beats 97%.
#include <bits/stdc++.h>
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    LinkedListNode<int> *temp=head;
    unordered_map<LinkedListNode<int> *,LinkedListNode<int>*> mp;
    while(temp)
    {
        LinkedListNode<int> *copy=new LinkedListNode<int>(temp->data);
        mp[temp]=copy;
        temp=temp->next;
    }
    temp=head;
    while(temp)
    {
        mp[temp]->next=mp[temp->next];
        mp[temp]->random=mp[temp->random];
        temp=temp->next;
    
    }
    return mp[head];
}
