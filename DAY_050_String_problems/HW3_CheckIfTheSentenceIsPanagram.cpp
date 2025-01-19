class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>flag(26,0);

        for(int i=0;i<sentence.size();i++){
            int index=sentence[i]-'a';
            flag[index]=1;
        }
        for(int i=0;i<26;i++){
            if(flag[i]==0)
                return 0;
        }
        return 1;
    }
};