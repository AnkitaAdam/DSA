class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        
        int start=0,end=0,n=nums.size();
        long long count=0;
        long long product=1;
        long long sum=0;

        while(end<n){
            sum+=nums[end];
            product = sum*(end-start+1);

            while(product>=k && start<=end){
                sum-=nums[start];
                start++;
                product = sum* (end-start+1);

            }

            count+=(end-start+1);
            end++;
        }

        return count;
    }
};