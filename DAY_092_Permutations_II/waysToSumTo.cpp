class Solution
{
  public:
    // function to count the total  
    // number of ways to sum up to 'N' 
    
    int ways(int arr[],int n,int sum){
        if(sum==0){
              return 1;
          }
          if(sum<0){
              return 0;
          }
          
          long long ans=0;
          
          for(int i=0;i<n;i++){
              ans+=ways(arr,n,sum-arr[i]);
          }
          
          return ans%10000000007;
    }
    int countWays(int arr[], int m, int N) 
    { 
      //code here.
      
      return ways(arr,m,N);
      
    } 
    
};
