class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int rem=0;
        int set=0;
        while(N>0){
            rem=N&1;
            if(rem){
                set+=1;
            }
            N/=2;
        }
        return set;
    }
};