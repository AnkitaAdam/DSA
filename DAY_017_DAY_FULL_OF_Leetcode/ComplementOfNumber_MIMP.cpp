class Solution {
    public int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        if(n==1){
            return 0;
        }
        int binary=0;
        int rem=0;
        int mul=1;
        while(n>0){
            rem=n%2;
            binary+=(rem^1)*mul;
            mul*=2;
            n/=2;
        }
        return binary;
       
    }
}