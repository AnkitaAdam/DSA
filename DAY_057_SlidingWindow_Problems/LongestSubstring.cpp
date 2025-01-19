class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s==""){
            return 0;
        }
        vector<int>count(256,0);

        int first=0;
        int second=0;
        int len=INT_MIN;

        while(second<s.size()){

            while(count[s[second]]){
                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;

            len=max(len,(second-first+1));
            second++;

        }
        return len;
    }
};