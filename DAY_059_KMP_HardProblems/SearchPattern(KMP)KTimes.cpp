class Solution
{
    public:
        
        void findlps(vector<int>&lps, string s){
            int prefix=0;
            int sufix=1;
            
            while(sufix<s.size()){
                if(s[prefix]==s[sufix]){
                    lps[sufix]=prefix+1;
                    prefix++;
                    sufix++;
                }else{
                    if(prefix==0){
                        lps[sufix]=0;
                        sufix++;
                    }else{
                        prefix=lps[prefix-1];
                    }
                }
            }
        }
        vector <int> search(string pat, string txt)
        {
            //code here
            
            vector<int>lps(pat.size(),0);
            findlps(lps,pat);
            
            vector<int>ans;
            
            int first=0; // points in txt
            int second=0; //points int pat;
            
            
            while(first<txt.size()){
                    
                    if(txt[first]==pat[second]){
                        first++;
                        second++;
                    }
                    else{
                        if(second==0){
                            first++;
                        }else{
                            second=lps[second-1];
                        }
                    }
                    
                    if(second==pat.size()){
                        ans.push_back(first-second +1);
                         second = lps[second - 1]; 
                    }
                }
            if(ans.empty())
                return {-1};
            
            return ans;
        }
};