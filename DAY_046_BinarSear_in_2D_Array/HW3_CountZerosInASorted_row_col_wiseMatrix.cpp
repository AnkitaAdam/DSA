
class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
		int row=A.size();
		int col=A[0].size();
    
        int count=0;
        for(int i=0;i<(row*col)-1;i++){
            int row_index=i/col;
            int col_index=i%col;
            if(A[row_index][col_index]==0){
                count++;
            }
        }
        return count;
	}
};