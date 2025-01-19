class Solution {
public:
    int i=0;
    string findString(string &s){
        string ans;
        
        while(i<s.length()){
            if(s[i]=='('){
                i++;
                string str=findString(s);
                ans+=str;
            }else if(s[i]==')'){
                i++;
                reverse(ans.begin(),ans.end());
                return ans;
            }else{
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
    string reverseParentheses(string s) {
       return findString(s);
    }
};