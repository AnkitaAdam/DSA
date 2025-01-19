class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int start=0;
        int end=nums.size()-1;

        int ans=nums.size();

        while(start<=end){
            int mid=(start+(end-start)/2);
            if(nums[mid]-(mid+1)>=k){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans+k;
    }
};