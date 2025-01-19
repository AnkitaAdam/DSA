class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) {
        // code here
        
        stack<int>st;
        
        for(int i=n-1;i>=0;i--){
            st.push(i);
        }
        
        while(st.size()>1){
            
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            
            if(M[first][second]==1){
                st.push(second);
            }
            else if(M[second][first]==1){
                st.push(first);
            }
            
        }
        
        if(st.empty()){
            return -1;
        }
        
        int index=st.top();
        st.pop();
        
        for(int i=0;i<n;i++){
            if(M[index][i]==1 || (M[i][index]==0 && i!=index)){
                return -1;
            }
        }
        
        
        return index;
    }
};