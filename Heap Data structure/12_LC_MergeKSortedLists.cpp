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

    class compare{
        public:
            bool operator()(ListNode* a, ListNode*b){
                return a->val > b->val;
            }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;

        priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

        for(auto list: lists){
            if(list){
                minHeap.push(list);
            }
        }

        ListNode* head = new ListNode(-1);
        ListNode* tail = head;

       

        while(!minHeap.empty()){

            ListNode* temp = minHeap.top();
            minHeap.pop();

            tail -> next = temp;
            tail = tail->next;

            if(temp->next){
                minHeap.push(temp->next);
            }
            

        }

        return head->next;


        
    }
};