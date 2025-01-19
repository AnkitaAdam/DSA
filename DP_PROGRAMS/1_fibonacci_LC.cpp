class Solution {
public:
    //top-down approach
    int fibon(int n,vector<int>&dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fibon(n-1,dp)+fibon(n-2,dp);
    }

    int fibon2(int n,vector<int>&dp){
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }

    int finbon3(int n){
        int curr=1,prev=0,prev2=1;
        for(int i=2;i<=n;i++){
            curr=prev+prev2;
            prev=prev2;
            prev2=curr;
        }
        return curr;
    }
    int fib(int n) {
        // if(n<=1){
        //     return n;
        // }
        // return fib(n-1)+fib(n-2);
        if(n<=1){
            return n;
        }
        vector<int>dp(n+1,-1);
        // return fibon(n,dp); //for top_down
        dp[0]=0;
        dp[1]=1;
        // return fibon2(n,dp); //for bottom_up

        return finbon3(n); // for space optimization

    }
};