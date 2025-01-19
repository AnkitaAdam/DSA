class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int ans=a^b;
        
        int rem=0;
        int set=0;
        
        while(ans>0){
            rem=ans&1;
            if(rem){
                set+=1;
            }
            ans/=2;
        }
        return set;
    }
};