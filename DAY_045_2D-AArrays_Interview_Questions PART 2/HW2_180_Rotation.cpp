class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        // Code here
        
         int row=matrix.size();
        int col=matrix[0].size();
        
        
        for(int i=0;i<row;i++){
            
            int start=0;
            int end=col-1;
            
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }
        
        // cout<<"\nROW REVERSE " ;
        
        // for(int i=0;i<row;i++){
            
        // }
        for(int i=0;i<col;i++){
            int start=0;
            int end=row-1;
            
            while(start<end){
                swap(matrix[start][i],matrix[end][i]);
                start++;
                end--;
            }
        }
        
    }
};