class Solution {
  public:
  
    void subsetSum(vector<int>&arr, int index,int n,vector<int>&ans,int sum){
        
        if(index==n){
            ans.push_back(sum);
            return;
        }
        
        subsetSum(arr,index+1,n,ans,sum);
        sum+=arr[index];
        subsetSum(arr,index+1,n,ans,sum);
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        
        vector<int>ans;
        
        subsetSum(arr,0,n,ans,0);
        
        return ans;
    }
};