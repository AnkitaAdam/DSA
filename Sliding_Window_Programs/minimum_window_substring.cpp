class Solution {
public:
    string minWindow(string s, string t) {
        
        if(s.empty() || t.empty()){
            return "";
        }
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;

        for(char ch:t){
            mp1[ch]++;
        }

        int start=0,end=0,n=s.size();
        vector<int>ans={-1,0,0};
        int required_size=mp1.size();
        int found_size=0;

        while(end<n){

            char c=s[end];
            mp2[c]++;

            if(mp1.find(c)!=mp1.end() && mp1[c] == mp2[c]){
                found_size++;
            }

            while(start<=end && found_size == required_size){
                char ch=s[start];

                if(ans[0]==-1 || end-start+1 < ans[0]){
                    ans[0]=end-start+1;
                    ans[1]=start;
                    ans[2]=end;
                }

                mp2[ch]--;

                if(mp1.find(ch)!=mp1.end() && mp2[ch]<mp1[ch]){
                    found_size--;
                }

                start++;
            }


            end++;
        }

        return (ans[0]==-1)? "" : s.substr(ans[1],ans[0]);
    }
};