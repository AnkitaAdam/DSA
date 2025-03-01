class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int n=nums.size();
        // int start=0;
        // int end=n-1;

        // while(start<=end){
        //     int mid=(start+((end-start)/2));

        //     if(nums[mid]==target){
        //         return mid;
        //     }else if(nums[mid]<target){
        //         start=mid+1;
        //     }else{
        //         end=mid-1;
        //     }
        // }
        // return end+1;
        int n = nums.size(),start=0,end=n-1, mid=0;
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                start = mid + 1;
            else 
                end = mid - 1;
        }
        if(nums[mid]>target)
            return mid;
        return mid+1;
    }
};