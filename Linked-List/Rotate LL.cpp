My approach Time Complexity ->O(N) beats 32% and space Complexity->O(N) beats 40%.
Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL||head->next==NULL||k==0)return head;
     int n=1;
     Node*temp=head;
     while(temp->next)
     {
          n++;
          temp=temp->next;
     }
     temp->next=head;
     k=k%n;
     k=n-k;
     while(k--)
     {
          temp=temp->next;
     }
     head=temp->next;
     temp->next=NULL;
     return head;
}
