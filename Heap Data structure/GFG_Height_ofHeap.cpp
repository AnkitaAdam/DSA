class Solution{
public:
    int heapHeight(int n, int arr[]){
        // code here
        
        // 2^ht = N --> relation
        
        int ht = 0;
        
        while(n>1){  //1 is because of node with only root contains height 1
            ht++;
            n/=2;
        }
        return ht;
        
    }
};