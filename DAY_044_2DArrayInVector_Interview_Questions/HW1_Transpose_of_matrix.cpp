class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        //lower triangle
        
        
        // for(int i=1;i<n;i++){
        //     for(int j=0;j<=i-1;j++){
        //         swap(matrix[i][j],matrix[j][i]);
        //     }
        // }
        
        //upper traingle
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};