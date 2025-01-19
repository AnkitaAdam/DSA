class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& arr) {
        // code here
        
        vector<int>ans(n,-1);
        stack<int>st;
        
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