 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        
        Node* zeroHead=new Node(-1);
        Node* oneHead=new Node(-1);
        Node* twoHead=new Node(-1);
        
        Node* zero=zeroHead;
        Node* one=oneHead;
        Node* two=twoHead;
        
        Node* curr=head;
        
        while(curr){
            
            if(curr->data==0){
                zero->next=curr;
                zero=zero->next;
            }else if(curr->data==1){
                one->next=curr;
                one=one->next;
            }else{
                two->next=curr;
                two=two->next;
            }
            curr=curr->next;
        }
        
        zero->next = nullptr;
        one->next = nullptr;
        two->next = nullptr;

        // Connect the three lists
        if (oneHead->next != nullptr) {
            zero->next = oneHead->next;
        } else {
            zero->next = twoHead->next;
        }

        one->next = twoHead->next;
        
        // Update the head to point to the beginning of the merged list
        head = zeroHead->next ? zeroHead->next : (oneHead->next ? oneHead->next : twoHead->next);
        
        // Delete dummy nodes to avoid memory leaks
        delete zeroHead;
        delete oneHead;
        delete twoHead;
        
        return head;
    }
};