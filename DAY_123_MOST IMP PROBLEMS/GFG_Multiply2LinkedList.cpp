class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        
       long MOD = 1000000007;
        
        Node* n1=first;
        Node* n2=second;
        
        long long num1=0;
        long long num2=0;
        
        
        while(n1){
            num1=(num1*10 + n1->data)%MOD;
            n1=n1->next;
        }
        
        while(n2){
            num2=(num2*10 + n2->data)%MOD;
            n2=n2->next;
        }
        
        
        
        return (num1*num2)%MOD;
        
    }
};