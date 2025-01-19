class Solution {
    public boolean isUgly(int n) {
        if(n==1 || n==2){
            return true;
        }
        if(n<=0){
            return false;
        }
        List<Integer> factors = new ArrayList<>();
        
        while (n % 2 == 0) {
            factors.add(2);
            n /= 2;
        }
        
        for (int i = 3; i <= Math.sqrt(n); i += 2) {
            while (n % i == 0) {
                factors.add(i);
                n /= i;
            }
        }
        
        if (n > 2) {
            factors.add(n);
        }

        for(int i:factors){
            if(i>5){
                return false;
            }
        }
        return true;
    }
}