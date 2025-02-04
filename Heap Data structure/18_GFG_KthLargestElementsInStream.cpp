
class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        
        vector<int> ans(n , -1);
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i=0; i<k; i++){
            pq.push(arr[i]);
        }
        
        ans[k-1] = pq.top();
        
        for(int i=k;i<n;i++){
            
            if(arr[i] > pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
            ans[i] = pq.top();
        }
        
        return ans;
    }
    
   
};