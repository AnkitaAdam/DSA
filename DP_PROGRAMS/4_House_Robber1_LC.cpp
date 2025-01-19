class Solution {
public:
    int robbery(int index,vector<int>&nums){
        if(index==0){
            return nums[0];
        }
        if(index<0){
            return 0;
        }

        return max(nums[index]+robbery(index-2,nums),robbery(index-1,nums));
    }

    int robbery(int index,vector<int>&nums,vector<int>&dp){
        if(index==0){
            return nums[0];
        }
        if(index==1){
            return max(nums[0],nums[1]);
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        
        return dp[index]=max(nums[index]+robbery(index-2,nums,dp),robbery(index-1,nums,dp));
    }

    int robbery(vector<int>&nums,vector<int>&dp,int n){
        for(int i=2;i<n;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        // return robbery(n-1,nums); // simple recursion

        vector<int>dp(n,-1);
        // return robbery(n-1,nums,dp); //top_down_dp

        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);

        // return robbery(nums,dp,n); //bottom_up_approach

        int prev1=nums[0];                 //space optimization
        int prev2=max(nums[0],nums[1]);
        int curr=0;
        for(int i=2;i<n;i++){
            curr=max(nums[i]+prev1,prev2);
            prev1=prev2;
            prev2=curr;
        }
        return curr;
    }
};