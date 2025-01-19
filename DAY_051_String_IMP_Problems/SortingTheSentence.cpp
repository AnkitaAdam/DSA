class Solution {
public:
    string sortSentence(string s) {
        s+=' ';
        string temp;
        vector<string>ans(10);
        int word=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                int pos=temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                word++;
            }else{
                temp+=s[i];
            }
        }
        string answer;
        for(int i=1;i<=word;i++){
            answer+=ans[i];
            answer+=' ';
        }
        answer.pop_back();

        return answer;
    }
};