class Solution {
public:
    vector<int> factorial(int N){
        // code here
        
        vector<int>ans(1,1);
        
        while(N>1){
            
            int size=ans.size();
            int carry=0;
            for(int i=0;i<size;i++){
                int result=ans[i]*N + carry;
                carry=result/10;
                ans[i]=result%10;
                
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
            N--;
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};