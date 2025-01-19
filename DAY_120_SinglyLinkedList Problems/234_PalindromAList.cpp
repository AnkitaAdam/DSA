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
    bool isPalindrome(ListNode* head) {

        if (!head || !head->next) {
            return true; // Empty list or single element list is a palindrome
        }
        
        int count=0;

        ListNode* temp=head;
        while(temp){
            count+=1;
            temp=temp->next;
        }

        count/=2;

        ListNode* first=head;

        while(--count){
            first=first->next;
        }

        ListNode* second=first->next;
        first->next=NULL;

        //reverse the second ll
        ListNode* prev=NULL;
        ListNode* futr=NULL;

        while(second){
            futr=second->next;
            second->next=prev;
            prev=second;
            second=futr;
        }
        second=prev;
        //traverse over first and second

        ListNode* one=head;
        ListNode* two=second;
        while(one && two){
            if(one->val!=two->val){
                return false;
            }
            one=one->next;
            two=two->next; 
        }


        return true;

    }
};