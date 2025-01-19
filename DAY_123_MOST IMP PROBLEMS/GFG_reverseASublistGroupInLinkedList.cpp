/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
        
        node* first= new node(0);
        first->next=head;
        head=first;
        
        while(first->next){
            
            int x=k;
            
            node* second=first->next;
            node* prev=first;
            node* curr=first->next;
            node* futr=NULL;
            
            while(x && curr){
                futr=curr->next;
                curr->next=prev;
                prev=curr;
                curr=futr;
                x--;
                
            }
            
            first->next=prev;
            second->next=curr;
            
            first=second;
        }
        
        head=head->next;
        
        return head;
    }
};