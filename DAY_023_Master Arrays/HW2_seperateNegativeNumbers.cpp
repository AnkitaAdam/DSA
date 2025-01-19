class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int count=0;
        int arr2[n];
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                count++;
            }
        }
        int k=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                k++;
                arr2[n-count]=arr[i];
                count--;
            }else{
                arr2[i-k]=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=arr2[i];
        }
    }
};