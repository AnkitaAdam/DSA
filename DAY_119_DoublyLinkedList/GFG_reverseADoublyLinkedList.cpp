/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        
        Node* curr=head;
        Node* future=NULL;
        while(curr){
            future=curr->next;
            curr->next=curr->prev;
            curr->prev=future;
            head=curr;
            curr=future;
        }
        
        return head;
        
    }
};