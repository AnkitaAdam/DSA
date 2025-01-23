class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    int minCost(vector<int>& arr) {
        // code here
        
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        
        int minCost = 0;
        
        while(pq.size()>1){
            
            int sum = pq.top();
            pq.pop();
            sum+= pq.top();
            pq.pop();
            
            minCost+=sum;
            pq.push(sum);
            
        }
        
        return minCost;
    }
};

// 2 3 4 6

// 2+3 = 5

// 4 5 6
// 4+5 = 9

// 6 + 9 = 15

// return 5+9+15  = 29 