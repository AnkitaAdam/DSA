class Solution {
public:

    void find_lps(vector<int>&lps,string s){

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
    int findMinCharsToAdd(string s){

        string rev=s;
        reverse(rev.begin(),rev.end());

        string combined=s+'$'+rev;

        vector<int>lps(combined.size(),0);

        find_lps(lps,combined);
        return s.size()-lps.back();
    }
    string shortestPalindrome(string s) {
        
        int minChars=findMinCharsToAdd(s);

         string rev = s;
        reverse(rev.begin(), rev.end());
        string extrachars = rev.substr(0, minChars);

        return extrachars + s;

    }
};