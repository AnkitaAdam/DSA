class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int n=nums.size();
        if(n==1)
            return 0;
        if(nums[0]>nums[1])
            return 0;
        if(nums[n-1]>nums[n-2])
            return n-1;

        start = 1;
        end = n-2;
        while(start<=end){

            int mid=(start+((end-start)/2));
            cout<<"mid = "<<mid;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1] || mid==0 || mid==nums.size()-1){

                return mid;
            }else if(nums[mid]>nums[mid-1]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
};