class Solution {
public:

    string add(string num1,string num2){
        int index1=num1.size()-1;
        int index2=num2.size()-1;
        string ans;
        int carry=0;

        while(index2>=0){
            int sum=(num1[index1]-'0')+(num2[index2]-'0') + carry;
            carry=sum/10;
            ans+='0'+(sum%10);
            index2--;index1--;
        }

        while(index1>=0){
            int sum=(num1[index1]-'0')+carry;
            carry=sum/10;
            ans+='0'+(sum%10);
            index1--;
        }

        if(carry){
            ans+='1';
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }

    string addStrings(string num1, string num2) {
        if(num1.size()>num2.size()){
            return add(num1,num2);
        }
        return add(num2,num1);
    }
};