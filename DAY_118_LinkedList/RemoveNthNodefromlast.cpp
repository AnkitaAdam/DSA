class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count=0;

        ListNode* temp=head;

        while(temp!=NULL){

            count+=1;
            temp=temp->next;
        }

       
        count-=n;

        if(count==0){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        

        temp=head;
        ListNode* prev=NULL;

        while(count--){
            prev=temp;
            temp=temp->next;
        }

       prev->next=temp->next;
       delete temp;

        return head;
    }
};