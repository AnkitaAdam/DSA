int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n=A.size();
    int start=0;
    int end=0;
    int len=0;
    
    while(end<n){
        if(A[end]==B){
            end++;
            continue;
        }
        swap(A[start],A[end]);
        start++;
        end++;
        len++;
    }
    
    return len;
}
