class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        
        //first transpose 
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        //col wise reverse
        
        for(int i=0;i<n;i++){
            int start=0;
            int end=n-1;
            
            while(start<end){
                swap(matrix[start][i],matrix[end][i]);
                start++;
                end--;
            }
        }
        
       
    } 
};