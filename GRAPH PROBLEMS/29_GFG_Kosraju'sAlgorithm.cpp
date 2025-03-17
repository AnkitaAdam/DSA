class Solution {
  public:
  
  
    void topologicalSorting(int node, vector<int> &visited, stack<int>&st, vector<vector<int>>&adj){
        
        visited[node] = 1;
        
        for(int i=0;i<adj[node].size();i++){
            
            if(!visited[adj[node][i]]){
                topologicalSorting(adj[node][i], visited, st, adj);
            }
        }
        
        st.push(node);
    }
  
  
    void dfs(int node, vector<int>&visited, vector<vector<int>>&adj){
        
        visited[node] = 1;
        for(int i=0;i<adj[node].size();i++){
            
            if(!visited[adj[node][i]]){
                dfs(adj[node][i], visited, adj);
            }
        }
    }
    int kosaraju(vector<vector<int>> &adj) {
        // code here
        
        
        //do topological sorting
        //reverse the edges
        //go through stack
            //if not visited 
            //SCS++;
            //and apply dfs
        
        int n = adj.size();    
    
        vector<int>visited(n,0);
        stack<int> st;
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                topologicalSorting(i, visited, st, adj);
            }
        }
        
        //reverse the edges : reversed graph:
        vector<vector<int>> adj2(n);
        
        for(int i=0;i<n;i++){
            
            for(int j =0; j<adj[i].size();j++){
                
                int u = i;
                int v = adj[i][j];
                adj2[v].push_back(u);
            }
        }
        
        
        //traverse the stack to find the strongly connected component in order
        for(int i=0;i<n;i++){
            visited[i] = 0;
        }
        int SCS=0;
        
        while(!st.empty()){
            
            int node = st.top();
            st.pop();
            
            if(!visited[node]){
                SCS++;
                dfs(node, visited, adj2);
            }
        }
        
        
        return SCS;
        
    }
};