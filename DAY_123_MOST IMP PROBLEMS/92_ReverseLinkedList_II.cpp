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

    ListNode* reverseSubList(ListNode* curr){
        ListNode* prev=NULL;
        ListNode* future=NULL;

        while(curr){
            future=curr->next;
            curr->next=prev;
            prev=curr;
            curr=future;
        }

        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        int count=1;

        ListNode* temp=head;

        while(temp){
            count+=1;
            temp=temp->next;

        }

        temp=head;

        ListNode* revStartPrev=NULL;
        ListNode* revStart=NULL;
        ListNode* revEnd=NULL;
        ListNode* revEndNext=NULL;

        for(int i=1;i<=right;i++){
            if(i<left){
                revStartPrev=temp;
            }
            if(i==left){
                revStart=temp;
            }
            if(i==right){
                revEnd=temp;
                revEndNext=revEnd->next;
            }
            temp=temp->next;
        }

       
        revEnd->next=NULL;

        revEnd=reverseSubList(revStart);

        if(revStartPrev){
            revStartPrev->next=revEnd;
        }else{
            head=revEnd;
        }

        revStart->next=revEndNext;

        return head;







    }
};