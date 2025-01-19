//User function Template for C++

/* structure for a node 
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
  // code here
  
  if(head==NULL){
      return;
  }
  
  struct Node* temp=head->next;
  cout<<head->data<<" ";
  while(head!=temp){
      cout<<temp->data<<" ";
      temp=temp->next;
  }
  
}