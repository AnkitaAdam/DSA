class Solution {
public:
    string intToRoman(int num) {
        vector<string> thousands = {"", "M", "MM", "MMM"};
        vector<string> hundreds = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        vector<string> tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        vector<string> ones = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

        string res;
        res+=thousands[num/1000];
        num-=(num/1000)*1000;
        res+=hundreds[num/100];
        num-=(num/100)*100;
        res+=tens[num/10];
        num-=(num/10)*10;
        res+=ones[num];
        return res;

    }
};