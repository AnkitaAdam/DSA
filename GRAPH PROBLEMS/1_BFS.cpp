class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        int v = adj.size();
        
        vector<int> ans;
        
        queue<int> qu;
        
        vector<bool> visited(v,0);
        
        qu.push(0);
        visited[0]=1;
        
        while(! qu.empty()){
            
            int node = qu.front();
            qu.pop();
            ans.push_back(node);
            
            for(int i=0; i<adj[node].size(); i++){
                
                if(!visited[adj[node][i]]){
                    visited[adj[node][i]] = 1;
                    qu.push(adj[node][i]);
                }
            }
        }
        
        return ans;
    }
};
