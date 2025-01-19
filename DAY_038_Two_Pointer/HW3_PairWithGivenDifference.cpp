int Solution::solve(vector<int> &A, int B) {
    
    sort(A.begin(),A.end());
    int n=A.size();
    int start=0;
    int end=1;
    if(B<0){
        B=B*(-1);
    }
    while(end<n){
        if(A[end]-A[start]==B){
            return 1;
        }else if(A[end]-A[start]<B){
            end++;
        }else{
            start++;
        }
        
        if(start==end){
            end++;
        }
    }
    return 0;
}
