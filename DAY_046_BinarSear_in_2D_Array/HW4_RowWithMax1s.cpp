class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    

        int max1=INT_MIN;
        int index= -1;
        
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    count++;
                }
            }
            if(count>max1 && count!=0){
                max1=count;
                index=i;
            }
        }
        return index;
	}
};