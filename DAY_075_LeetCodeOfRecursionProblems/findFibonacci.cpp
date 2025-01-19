class Solution {
  public:
  int mod=1000000007;
  
  void findfib(vector<int>&ans,int n,int &f,int &s){
      
      if(n<=1){
          return;
      }
      findfib(ans,n-1,f,s);
      
      int sum=(f+s)%mod;
      ans.push_back(sum);
      f=s;
      s=sum;
      
  }
  
    vector<int> Series(int n) {
        // Code here
        
        vector<int>ans;
        
        int f=0;
        int s=1;
        
        ans.push_back(f);
        ans.push_back(s);
        
        findfib(ans,n,f,s);
        
        return ans;
        
        
       
        
    }
};