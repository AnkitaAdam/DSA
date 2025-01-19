class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        
        unordered_map<int,int>mp;
        
        mp[0]=1;
        int prefixSum=0;
        int count=0;
        
        for(int  i=0;i<arr.size ();i++){
            prefixSum+=arr[i];
            if(mp.count(prefixSum)){
                count+=mp[prefixSum];
                mp[prefixSum]++;
      sub      }else{
                mp[prefixSum]=1;
            }
        }
        
        return count;
    }
};
