class Solution {
public:
    int predict(int n,int k){
        if(n==1){
            return 0;
        }
        return (predict(n-1,k)+k) %n;
    }
    int findTheWinner(int n, int k) {

        return predict(n,k)+1;
    }
};