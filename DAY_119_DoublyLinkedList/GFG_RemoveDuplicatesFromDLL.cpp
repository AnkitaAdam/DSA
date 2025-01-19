class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        Node* curr1=head;
        Node* curr2=head->next;
        
        while(curr2){
            
            if(curr1->data==curr2->data){
                curr1->next = curr2->next;
                if (curr2->next) {
                    curr2->next->prev = curr1;
                }
                delete curr2;
                
                curr2=curr1->next;
                
            }else{
                curr1->next=curr2;
                curr2->prev=curr1;
                
                curr1=curr1->next;
                curr2=curr2->next;
            }
        }
        return head;
    }
};