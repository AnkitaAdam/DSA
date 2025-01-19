class Solution{
  public:
    vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q) {
        vector<int> ans;
        
        int maxSum=INT_MIN;
        for(int i=0;i<Q;i++){
            
            int prefixSum=0;
            for(int j=L[i];j<=R[i];j++){
                prefixSum+=a[j];
                maxSum=max(maxSum,prefixSum);
            }
            ans.push_back(maxSum);
            maxSum=INT_MIN;
        }
        return ans;
    }
};