class Solution {
public:

    void findLPS(vector<int>&lps, string s){
        
        int prefix=0;
        int sufix=1;
        
        while(sufix<s.size()){
            
            //if match
            if(s[prefix]==s[sufix]){
                lps[sufix]=prefix+1;
                prefix++;
                sufix++;
            }
            //not match
            else{
                if(prefix==0){
                    lps[sufix]=0;
                    sufix++;
                }else{
                    prefix=lps[prefix-1];
                }
            }
        }
    }
    int minChar(string str){
        //Write your code here
        
        string rev=str;
        string s=str;
        reverse(rev.begin(),rev.end());
        
        str+='$';
        str+=rev;
        
        vector<int>lps(str.size(),0);
        
        findLPS(lps,str);
        
        return s.size()-lps[str.size()-1];
    }
};