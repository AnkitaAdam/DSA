//solution with time complexity (n-m)*m;


class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        for(int i=0;i<=n-m;i++){

            int first=i;

            int second=0;

            while(second<m){
                if(haystack[first]==needle[second]){
                    first++;
                    second++;
                }else{
                    break;
                }
            }

            if(second==m)
                return first-second;
            
        }
        return -1;
    }
};