
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                st.pop();
            }else{
                 st.push(arr[i]);
            }
           
        }
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        
        return v;
    }
};