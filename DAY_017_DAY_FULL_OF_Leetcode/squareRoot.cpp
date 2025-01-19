class Solution {
    public int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int sq=1;
        for(int i=0;i<x;i++){
            if ((long)i * i > Integer.MAX_VALUE) {
                return i - 1;
            }
            sq=i*i;
            if(sq==x){
                return i;
            }

            if(sq>=x){
                return i-1;
            }
    	}
        return 1;
    }
}