class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int t=X-A[i];
          
            int start=i+1;
            int end=n-1;
            
            while(start<end){
                if(A[start]+A[end]==t){
                    return true;
                }else if(A[start]+A[end]>t){
                    end--;
                }else{
                    start++;
                }
            }
        }
        return false;
    }

};