/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* reverse(Node* curr){
        
        Node* prev=NULL;
        Node* futr=NULL;
        
        while(curr){
            futr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=futr;
            
        }
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        // code here
       while(l1->next!=NULL && l1->data==0){
           l1=l1->next;
       }
       
       while(l2->next!=NULL && l2->data==0){
           l2=l2->next;
       }
       
       Node* head1= reverse(l1);
       Node* head2= reverse(l2);
       
       Node* sumListHead=new Node(0);
       Node* sumList=sumListHead;
       
       Node* curr1=head1;
       Node* curr2=head2;
       
       
       
       int sum=0;
       int carry=0;
       
       while(curr1 && curr2){
           
            sum=curr1->data + curr2->data + carry;
            
            sumList->next=new Node(sum%10);
            
            sumList=sumList->next;
            
            carry=sum/10;
            
            // cout<<"sum = "<<sum<<" carray "<<carry<<"\n";
            
            curr1=curr1->next;
            curr2=curr2->next;
       }
       
       while(curr1){
            sum=curr1->data + carry;
            
            sumList->next=new Node(sum%10);
            
            sumList=sumList->next;
            
            carry=sum/10;
            //  cout<<"sum = "<<sum<<" carray "<<carry<<"\n";
            
            curr1=curr1->next;
       }
       
       while(curr2){
            sum=curr2->data + carry;
            
            sumList->next=new Node(sum%10);
            
            sumList=sumList->next;
            
            carry=sum/10;
            //  cout<<"sum = "<<sum<<" carray "<<carry<<"\n";
            
            curr2=curr2->next;
       }
       
       while(carry){
           sumList->next=new Node(carry%10);
           
           sumList=sumList->next;
           
           carry/=10;
       }
       
       Node* h1=reverse(sumListHead->next);
       
       return h1;
       
    }
    
};