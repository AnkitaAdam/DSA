class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        // code here
       
        sort(arr,arr+n);
        
        long long start=0;
        long long end=n-1;
        
        
        while(start<end){
           long long prod=(arr[start]*arr[end]);
            if(prod==x){
                return 1;
            }else if(prod<x){
                start++;
            }else{
                end--;
            }
        }
        return 0;
    }
};