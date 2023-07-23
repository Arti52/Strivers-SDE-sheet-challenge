//time Complexity->O(N) beats 70% nd Space Complexity->O(N) beats 91%.
#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node *getListAfterReverseOperation(Node *head, int n, int b[])
{
 
  Node*curr=head;
  vector<int>temp;
   while(curr)
		{
		temp.push_back(curr->data);
		curr=curr->next;
		}
	int start=0;
		for(int i=0;i<n;i++)
		{
		reverse(temp.begin()+start,min(temp.begin()+start+b[i],temp.end()));
		start+=b[i];
		}
		curr=head;
		int i=0;
		while(curr)
		{
		curr->data=temp[i++];
		curr=curr->next;
		}
		return head;
}
	
	
