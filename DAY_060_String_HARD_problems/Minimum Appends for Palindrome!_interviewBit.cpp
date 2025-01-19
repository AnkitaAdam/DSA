

vector<int> findLPS(string s){
        
        vector<int>lps(s.size(),0);
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
        
        return lps;
    }
    int Solution::solve(string str){
        //Write your code here
        
        string rev=str;
        string s=str;
        reverse(rev.begin(),rev.end());
    
        string combined=rev+'$'+str;
        vector<int>lps=findLPS(combined);
    
        
        return s.size()-lps.back();
    }