//sqrt of x LC

class Solution {
public:
    int mySqrt(int x) {
        int start=1;
        int end=x;
        int ans=0;

        while(start<=end){
            int mid=(end+((start-end)/2));
            if(mid==x/mid){
                return mid;
            }
            else if(mid < x/mid){
                ans=mid;
                start=mid+1;
               
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};