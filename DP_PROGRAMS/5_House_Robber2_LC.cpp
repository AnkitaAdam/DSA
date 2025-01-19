class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();

        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }

        int prev1=nums[0];                 //space optimization
        int prev2=max(nums[0],nums[1]);
        int curr1=prev2;
        for(int i=2;i<n-1;i++){
            curr1=max(nums[i]+prev1,prev2);
            prev1=prev2;
            prev2=curr1;
        }

        prev1=nums[1];                 //space optimization
        prev2=max(nums[1],nums[2]);
        int curr2=prev2;
        for(int i=3;i<n;i++){
            curr2=max(nums[i]+prev1,prev2);
            prev1=prev2;
            prev2=curr2;
        }

        return max(curr1,curr2);
        
    }
};