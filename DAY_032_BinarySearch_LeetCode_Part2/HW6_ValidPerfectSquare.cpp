class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=0;
        int end=num;

        int ans=0;

        while(start<=end){
            long mid=end+(start-end)/2;
            if(mid*mid == num){
                return true;
            }else if(mid*mid < num){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
};