class Solution
{
    public:
    
    int mod=1000000007;
    //Function to count the number of ways in which frog can reach the top.
    
    long long ways(int n, vector<long long>&dp){
        
        if(n<=1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        
        return dp[n]=(ways(n-1,dp)+ways(n-2,dp)+ways(n-3,dp))%mod;
    }
    long long countWays(int n)
    {
        
        // your code here
        
        // if(n==0 || n==1){
        //     return 1;
        // }else if(n==2){
        //     return 2;
        // }
        
        // return countWays(n-1)+countWays(n-2)+countWays(n-3);
        
        // if(n==0 || n==1){
        //     return 1;
        // }else if(n==2){
        //     return 2;
        // }
        
        // long long first=1;
        // long long second=1;
        // long long third=2;
        // long long sum=0;
        
        // for(int i=3;i<=n;i++){
        //     sum=(first+second+third)%mod;
        //     first=second;
        //     second=third;
        //     third=sum;
        // }
        
        // return sum%mod;
        
        vector<long long>dp(n+1,-1);
        return ways(n,dp)%mod;
    }
    
    
};