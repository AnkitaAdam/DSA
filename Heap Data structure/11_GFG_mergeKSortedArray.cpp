class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        
        
        priority_queue <pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> > minHeap;
        
        for(int i=0;i<arr.size(); i++){
            minHeap.push({arr[i][0],{i,0}} );
        }
        
        vector<int>ans;
        
        
        while(!minHeap.empty()){
            
            ans.push_back(minHeap.top().first);
            int i = minHeap.top().second.first;
            int j = minHeap.top().second.second;
            
            minHeap.pop();
             
            if(j+1 < arr[0].size()){
                
                minHeap.push( {arr[i][j+1],{i,j+1} } );
                
            }
            
        }
        
        return ans;
        
    }
};