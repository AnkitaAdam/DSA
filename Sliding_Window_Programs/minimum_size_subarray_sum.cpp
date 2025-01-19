class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int end=0;
        int sum=0;
        int minLength=INT_MAX;

        while(end<nums.size()){
            
            sum+=nums[end];

            while(sum>=target){

                sum-=nums[start];
                minLength=min(minLength,(end-start+1));
                start++;
            }
            end++;
            
        }

        if(minLength==INT_MAX)
            return 0;
        return minLength;
    }
};