class Solution{   
public:
    int countZeroes(int nums[], int n) {
        // code here
        
        int target=0;
        int start=0;
        int end=n-1;
        
        int first=-1;
        int last=-1;
        
        while(start<=end){
            int mid=(start+((end-start)/2));
            if(nums[mid]==0){
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]==1)
                start=mid+1;
        }
        start = 0, end = n-1;
        while(start<=end){
            int mid=(start+((end-start)/2));
            if(nums[mid]==0){
                last=mid;
                start=mid+1;
            }
            else if(nums[mid]==1)
                start=mid+1;
        }
        
        return (last-first)+1;
    }
};