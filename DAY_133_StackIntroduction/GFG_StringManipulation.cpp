class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
        // Your code goes here
        
        stack<string>st;
        
        for(int i=0;i<v.size();i++){
            if(st.empty()){
                st.push(v[i]);
            }else if(st.top()==v[i]){
                st.pop();
            }else{
                st.push(v[i]);
            }
        }
        
        return st.size();
    } 
};