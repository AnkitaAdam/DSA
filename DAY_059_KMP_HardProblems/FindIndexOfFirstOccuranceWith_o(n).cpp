//solution with time complexity o(n);


class Solution {
public:

    void findlps(vector<int>&lps,string s){
        int prefix=0;
        int sufix=1;

        while(sufix<s.size()){

            if(s[prefix]==s[sufix]){
                lps[sufix]=prefix+1;
                sufix++;
                prefix++;

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

    int strStr(string haystack, string needle) {
     


        //solution with O(n) using kmp alg

        vector<int>lps(needle.size(),0);
        findlps(lps,needle);

        int first=0; //points to haystack
        int second=0; //points to neddle

        int n=haystack.size();
        int m=needle.size();

        while(first<haystack.size() && second<needle.size()){

            if(haystack[first]==needle[second]){
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

        if(second==m){
            return first-second;
        }
        return -1;

    }
};