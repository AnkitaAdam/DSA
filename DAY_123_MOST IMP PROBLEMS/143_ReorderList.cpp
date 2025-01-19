/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        // vector<int>values;

        // ListNode* temp=head;

        // while(temp!=NULL){
        //     count+=1;
        //     values.push_back(temp->val);
        //     temp=temp->next;
        // }

        // temp=head;

        // int start=0;
        // int end=values.size()-1;

        // cout<<"\nvalues- ";
        // for(auto i:values){
        //     cout<<i<<" ";
        // }

        // while(start<end){
        //     temp->val=values[start];
        //     temp=temp->next;
        //     if(temp!=NULL){
        //         temp->val=values[end];
        //         temp=temp->next;
        //     }

        //     start++;
        //     end--;
        // }

        // if (start == end) {
        //     temp->val = values[start];
        // }


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