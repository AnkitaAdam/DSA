class Solution {
  public:
    // void lower(string &s,int index){
    //     if(index<0){
    //         return;
    //     }
        
    //     if(s[index]>=65 && s[index]<=90){
    //         s[index]='a'+s[index]-'A';
    //     }
    //     lower(s,index-1);
    // }
    
    
    void tolower(string &s){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]='a'+s[i]-'A';
            }
        }
    }
    string toLower(string s) {
        // code here
        
        // lower(s,s.size()-1);
        tolower(s);
        return s;
    }
};