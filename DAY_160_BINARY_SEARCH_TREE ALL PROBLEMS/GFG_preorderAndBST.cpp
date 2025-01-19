class Solution {
  public:
  
    
    void BST(int arr[], int &index, int lower, int upper, int &N){
        
        if(index == N || lower>arr[index] || upper<arr[index] ){
            return;
        }
        
        
        int value = arr[index++];
        
        BST(arr, index, lower, value, N);
        BST(arr, index, value, upper, N);
        
        
    }
    int canRepresentBST(int arr[], int N) {
        // code here
        
        int index = 0;
        BST(arr, index, INT_MIN, INT_MAX,N);
        
        if(index == N){
            return 1;
        }
        
        return 0;
        
    }
};