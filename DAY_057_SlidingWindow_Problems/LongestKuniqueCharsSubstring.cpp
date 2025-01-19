class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        vector<int>count(26,0);
        
        int first=0;
        int end=0;
        int len=-1;
        
        int unique=0;
        
        while(end<s.size()){
            
            count[s[end]-'a']++;
            if(count[s[end]-'a']==1){
                unique++;
            }
            
            while(unique>k){
                count[s[first]-'a']--;
                if(count[s[first]-'a']==0){
                    unique--;
                }
                
                first++;
            }
            if(unique==k){
                len=max(len,end-first+1);
            }
            
            end++;
        }
        
        return len;
        
    }
};