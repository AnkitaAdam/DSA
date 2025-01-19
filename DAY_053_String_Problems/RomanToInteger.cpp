class Solution {
public:
    int num(char s){
        if(s=='I')
            return 1;
        else if(s=='V')
            return 5;
        else if(s=='X')
            return 10;
        else if(s=='L')
            return 50;
        else if(s=='C')
            return 100;
        else if(s=='D')
            return 500;
        else
            return 1000;
    }
    int romanToInt(string s) {
        int sum=0;
        int i=0;

        while(i<s.size()-1){
            if(num(s[i])<num(s[i+1])){
                sum-=num(s[i]);
            }else{
                sum+=num(s[i]);
            }
            i++;
        }
        sum+=num(s[i]);
        return sum;
    }
};