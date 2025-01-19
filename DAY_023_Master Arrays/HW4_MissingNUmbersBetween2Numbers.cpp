class Solution{
    public:
    int getCount(int arr[], int n, int num1, int num2)
    {
        //Complete the function
        int start=0;
        int end=0;
        for(int i=0;i<n;i++){
            if(arr[i]==num1){
                start=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==num2){
                end=i;
                break;
            }
        }
        if(end==start){
            return 0;
        }else if(end-start==1){
            return 0;
        }
        return end-start-1;
    }
};