
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    void reorderList(Node* head) {
        // Your code here
        
        int count=0;
        ListNode* temp=head;
        stack<ListNode*>st;

        while(temp){
            count+=1;
            st.push(temp);
            temp=temp->next;
        }

        int mid=count/2;

        cout<<"mid = "<<mid;

        ListNode* curr=head;
        ListNode* currfwd=NULL;
        
        for(int i=0;i<mid;i++){
            currfwd=curr->next;
            ListNode* ending=st.top();
            st.pop();
            curr->next=ending;
            ending->next=currfwd;
            curr=currfwd;
            
        }
        curr->next=NULL;
    }
};