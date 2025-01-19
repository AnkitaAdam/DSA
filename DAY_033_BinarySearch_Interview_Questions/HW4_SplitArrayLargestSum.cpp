class Solution {
  public:
    int splitArray(int arr[] ,int n, int k) {
        // code here
        
        int start=0,end=0;
        int leastSplits=0;
        for(int i=0;i<n;i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        while(start<=end){
            int mid=start+(end-start)/2;
            int sum=0;
            int splits=1;
            for(int i=0;i<n;i++){
                sum+=arr[i];
                if(sum>mid){
                    splits++;
                    sum=arr[i];
                }
            }
            if(splits<=k){
                leastSplits=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return leastSplits;
    }
};