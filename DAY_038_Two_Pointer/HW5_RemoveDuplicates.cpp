int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()==1){
        return 1;
    }
    int start=0;
    int end=1;
    int count=1;
    
    while(end<A.size()){
        if(A[start]==A[end]){
            end++;
        }else{
            swap(A[start+1],A[end]);
            count++;
            start++;
            end++;
        }
    }
    return count;
}
