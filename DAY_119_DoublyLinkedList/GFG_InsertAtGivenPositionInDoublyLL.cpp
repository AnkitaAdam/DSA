
/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   // Your code here
   
   Node* temp=head;
   
   if(head->next==NULL){
       Node* t=new Node(data);
       t->prev=head;
       head->next=t;
   }
   else if(pos==0){
        Node* t=new Node(data);
        t->prev=temp;
        t->next=temp->next;
        temp->next=t;
        t->next->prev=t;
   }else{
       temp=head;
       while(pos>0){
          temp=temp->next;
          pos--;
      }
    //   cout<<"data = "<<temp->data<<"\n";
      if(temp->next==NULL){
          Node* t=new Node(data);
          temp->next=t;
          t->prev=temp;
      }else{
          
          Node* t=new Node(data);
          t->prev=temp;
          t->next=temp->next;
          temp->next=t;
          t->next->prev=t;
      }
   }
   
  
  
  