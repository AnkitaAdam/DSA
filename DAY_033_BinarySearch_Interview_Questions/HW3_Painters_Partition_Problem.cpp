class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        
        long long start=0,end=0;
        long long ans=0,mid;
        
        for(int i=0;i<n;i++){
            if(start<arr[i]){
                start=arr[i];
            }
            end+=arr[i];
        }
        
        while(start<=end){
            mid=start+(end-start)/2;
            long long mins=0,count=1;
            for(int i=0;i<n;i++){
                mins+=arr[i];
                if(mins>mid){
                    count++;
                    mins=arr[i];
                }
            }
            if(count<=k){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};