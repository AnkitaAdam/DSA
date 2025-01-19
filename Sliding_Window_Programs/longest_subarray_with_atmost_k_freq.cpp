class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        int longest=INT_MIN;

        while(end<nums.size()){

            mp [nums[end]]++;

            while(mp[nums[end]] > k){
                mp[nums[start]]--;
                start++;
            }
            longest=max(longest,end-start+1);

            end++;
        }

        return longest;
    }
};