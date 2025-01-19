class Solution {
  public:
    int cubeRoot(int N) {
        // code here
        
        int start=0;
        int end=N;
        
        long cube=0,mid, ans=-1;
        
        while(start<=end){
            mid=(start+(end-start)/2);
            cube=mid*mid*mid;
            if(cube==N){
                return mid;
            }else if(cube<N){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};