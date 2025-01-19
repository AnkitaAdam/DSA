
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
    int count1=0;
    
    Node* t1=head1;
    
    while(t1!=NULL){
        count1+=1;
        t1=t1->next;
    }
    
    int count2=0;
    
    Node* t2=head2;
    
    while(t2!=NULL){
        count2+=1;
        t2=t2->next;
    }
    
    t1=head1;
    t2=head2;
    
    while(count1>count2){
        t1=t1->next;
        count1--;
    }
    
    while(count2>count1){
        t2=t2->next;
        count2--;
    }
    
    while(t1!=t2){
        t1=t1->next;
        t2=t2->next;
    }
    
    if(!t1){
        return -1;
    }
    
    return t1->data;
}