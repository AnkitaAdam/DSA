bool find4Numbers(int A[], int n, int X)  
{
    sort(A,A+n);
    
    for(int k=0;k<n;k++){
        
        int a=X-A[k];
        
        for(int i=k+1;i<n;i++){
            int t=a-A[i];
          
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
    }
      
    return false;
}