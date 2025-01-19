class Solution {
public:
    int specialArray(vector<int>& nums) {
        int start=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=-1;

        int end=nums[n-1];

        while(start<=end){
            int mid=start+(end-start)/2;

            int  count=0;

            for(int i=0;i<n;i++){
                if(nums[i]>=mid){
                    count++;
                }
            }

            if (count == mid) {
                return mid;
            } else if (count > mid) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};