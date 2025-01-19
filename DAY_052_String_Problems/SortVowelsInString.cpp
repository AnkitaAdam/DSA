class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);

        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';
            }else if(s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';
            }
        }

        string vowel;

        for(int i=0;i<26;i++){
            while(upper[i]){
                vowel+='A'+i;
                upper[i]--;
            }
        }

        for(int i=0;i<26;i++){
            while(lower[i]){
                vowel+='a'+i;
                lower[i]--;
            }
        }
        int index1=0;
        int index2=0;
        while(index2<vowel.size()){
            if(s[index1]=='#'){
                s[index1]=vowel[index2];
                index2++;
                
            }
            index1++;

        }

        return s;

    }
};