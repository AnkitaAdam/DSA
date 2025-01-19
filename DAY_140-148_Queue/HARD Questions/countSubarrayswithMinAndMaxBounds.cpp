class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
        int index=-1;
        long long ans=0;
        int minPos=-1;
        int maxPos=-1;

        for(int i=0;i<nums.size();i++){

            if(nums[i]<minK || nums[i]>maxK){
                index=i;
            }

            if(nums[i]==minK){
                minPos=i;
            }

            if(nums[i]==maxK){
                maxPos=i;
            }

            long long smaller=min(maxPos,minPos);
            long long temp=smaller - index;

            ans+= (temp<=0) ? 0 : temp;
        }

        return ans;
    }
};