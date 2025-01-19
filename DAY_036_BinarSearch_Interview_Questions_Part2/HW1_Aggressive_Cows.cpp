class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int start=1,end=stalls[n-1]-stalls[0];
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            int pos=stalls[0];
            int count=1;
            
            for(int i=0;i<n;i++){
                if(pos+mid <= stalls[i]){
                    count++;
                    pos=stalls[i];
                }
            }
            
            if(count<k){
                end=mid-1;
            }else{
                ans=mid;
                start=mid+1;
            }
            
        }
        
        return ans;
        
    }
};