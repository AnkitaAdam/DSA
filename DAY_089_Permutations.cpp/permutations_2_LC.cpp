class Solution {
public:

    void permute(int index,int n,vector<int>&nums,vector<vector<int>>&ans){

        vector<bool>used(21,0);
        if(index==n){
            ans.push_back(nums);
            return;
        }

        for(int i=index;i<n;i++){
            if(used[nums[i]+10]==0){
                swap(nums[i],nums[index]);
                permute(index+1,n,nums,ans);
                swap(nums[i],nums[index]);
                used[nums[i]+10]=1;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        permute(0,nums.size(),nums,ans);

        return ans;
    }
};