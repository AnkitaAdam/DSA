//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* reverse(Node* head){
        
        Node* prev=NULL;
        Node* futur=NULL;
        
        while(head){
            futur=head->next;
            head->next=prev;
            prev=head;
            head=futur;
        }
        return prev;
    }
    
    Node* reverseBetween(Node* head, int a, int b)
    {
        //code here
        
        Node* revStart=NULL;
        Node* revPrev=NULL;
        Node* revEnd=NULL;
        Node* revEndNext=NULL;
        
        Node* curr=head;
        int i=1;
        
        while(curr && i<=b){
            
            if(i<a){
                revPrev=curr;
            }
            
            if(i==a){
                revStart=curr;
                
            }
            if(i==b){
                revEnd=curr;
                revEndNext=revEnd->next;
            }
            
            curr=curr->next;
            i++;
        }
        
        revEnd->next=NULL;
        
        revEnd=reverse(revStart);
        
        if(revPrev){
            revPrev->next=revEnd;
        }else{
            head=revEnd;
        }
        
        revStart->next=revEndNext;
        
        return head;
        
    }
};