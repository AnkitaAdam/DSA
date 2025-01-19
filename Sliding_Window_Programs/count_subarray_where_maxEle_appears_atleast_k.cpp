class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int start = 0; 
        int end = 0;
        int n =nums.size();
        int count=0;
        int maxi=INT_MIN;
        long long ans=0;

        for(int i:nums){
            maxi=max(maxi,i);
        }
        while(end<n){
            if(nums[end]==maxi){
                count++;
            }

            while(count == k){
                ans+=n-end;
                if(nums[start]==maxi){
                    count--;
                }
                start++;
            }
            end++;
        }
        return ans;
    }
};