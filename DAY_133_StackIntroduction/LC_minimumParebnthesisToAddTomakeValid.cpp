class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int left=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                left++;
            }else{
                if(left==0){
                    count++;
                }else{
                    left--;
                }
            }
        }

        return left+count;
    }
};


//using stack : 


stack<char>st;
        int count=0;
        for(int i=0;i<s.length();i++){

            if(s[i]=='('){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    count++;
                }else{
                    st.pop();
                }
                
            }
        }
        return st.size()+count;