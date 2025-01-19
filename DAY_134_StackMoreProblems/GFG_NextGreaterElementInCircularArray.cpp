class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        
        vector<long long>ans(n,-1);
        stack<long long>st;
        
        for(int i=0;i<arr.size()*2;i++){
            while(!st.empty() && arr[i%n]>arr[st.top()]){
                ans[st.top()]=arr[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        
        return ans;
    }
};