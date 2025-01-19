class Solution{
	public:
        
       int findCount(vector<int>& nums, int index, int n, int sum, int m){
        if(index == n){
            if(sum==0) {
                return 0;
            }
            
            return sum%m==0;
        }
        
        return findCount(nums, index + 1, n, sum, m) || findCount(nums, index + 1, n, sum + nums[index], m);
    }

    int DivisibleByM(vector<int> nums, int m){
        return findCount(nums, 0, nums.size(), 0, m);
    }
};