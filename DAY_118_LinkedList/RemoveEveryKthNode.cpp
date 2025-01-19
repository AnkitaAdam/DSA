class Solution {
    public:
    
    Node* deleteK(Node *head,int K){
      //Your code here
      
      Node* temp=head;
      Node* prev=NULL;
      int count=1;
      
      while(temp){
          
          if(K==1){
              return NULL;
          }
          
          if(K==count){
              prev->next=temp->next;
              delete temp;
              temp=temp->next;
              count=1;
          }else{
              prev=temp;
              temp=temp->next;
              count++;
          }
          
      }
      
      return head;
      
    }
};