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
    ListNode* rotateRight(ListNode* head, int k) {
        
        //  if (!head || !head->next) {
        //     return head;
        // }

        // if(k==0){
        //     return head;
        // }

        

        // int count=0;

        // ListNode* temp=head;

        // while(temp!=NULL){
        //     count+=1;
        //     temp=temp->next;
        // }

        // if(k==count){
        //     return head;
        // }

        // k=k%count;
        // count-=k;

        // temp=head;
        // ListNode* prev=NULL;
        // while(count--){
        //     prev=temp;
        //     temp=temp->next;
        // }
        
        // prev->next=NULL;

        // ListNode* tail=temp;
        // while(tail->next!=NULL){
        //     tail=tail->next;
        // }

        // tail->next=head;
        // head=temp;

        // return temp;

        if (!head || !head->next || k == 0) {
            return head;
        }

        // Calculate the length of the list
        int length = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        // If k is greater than the length of the list, rotate only k % length times
        k = k % length;
        if (k == 0) {
            return head;
        }

        // Find the new head and tail after rotation
        int stepsToNewHead = length - k;
        ListNode* newTail = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        tail->next = head;

        return newHead;

    }
};