
//is power of 2or not

class Solution {
public:
    bool isPowerOfTwo(int n) {

        while(n!=1){
            if(x%2==1){
                return 0;
            }
            x/=2;
        }
        return 1;
    }
};