/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if (head == NULL) {
            return true; // An empty list can be circular as mentioned in que
        }

        Node* temp=head;
        
        while(temp->next!=NULL){
            
            if(temp->next==head){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};