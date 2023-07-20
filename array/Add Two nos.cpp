//My approach time Comlexity O(node1)+O(node2) beats 27% ans space Complexity O(node1)O(node2) beats 50%.
/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    if(num1==NULL)
       return num2;
    if(num2==NULL)
       return num1;
    Node* temp=new Node(-1);
    Node* head=temp;
    int c=0;
    while(num1&&num2)
    {
        int no=num1->data+num2->data+c;
        c=no/10;
        temp->next=new Node(no%10);
        temp=temp->next;
        num1=num1->next;
        num2=num2->next;
    }
    while(num1)
    {
        int no=num1->data+c;
        c=no/10;
        temp->next=new Node(no%10);
        temp=temp->next;
        num1=num1->next;
    }
    while (num2) {
        int no=num2->data+c;
        c=no/10;
        temp->next=new Node(no%10);
        temp=temp->next;
        num2=num2->next;
    }
    if(c)
       temp->next=new Node(c);
    return head->next;
}
