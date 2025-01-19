class Solution {
public:

    void find_lps(vector<int>&lps,string s){
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
    int find_match(string temp,string b){
        vector<int>lps(b.size(),0);
        find_lps(lps,b);

        int first=0;
        int second=0;

        while(first<temp.size() && second<b.size()){

            if(temp[first]==b[second]){
                first++;
                second++;
            }else{
                if(second==0){
                    first++;
                }else{
                    second=lps[second-1];
                }
            }
        }
        if(second==b.size())
            return 1;
        return 0;
    }
    
    int repeatedStringMatch(string a, string b) {
        string temp=a;
        int repeat=1;

        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }

        if(find_match(temp,b)==1)
            return repeat;
        
        if(find_match(temp+a,b)==1)
            return repeat+1;
        
        return -1;
    }
};