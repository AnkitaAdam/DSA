
class Solution {
  public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {

        // Your code here
        
        long long largeSum=INT_MIN;
        long long prefixSum=0;
        
        for(int i=0;i<n;i++){
            prefixSum+=arr[i];
            largeSum=max(largeSum,prefixSum);
            if(prefixSum<0){
                prefixSum=0;
            }
        }
        return largeSum;
    }
};