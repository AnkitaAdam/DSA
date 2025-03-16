class Solution {
  public:
  
    void DFS(int node, int parent,vector<int> &discoveryTime, vector<int>&lowTime, vector<int> &visited, vector<int>&artPt,vector<int> adj[], int &counter ){
        
        visited[node] = 1;
        discoveryTime[node] = lowTime[node] = counter;
        int child=0;
        
        for(int i=0;i<adj[node].size();i++){
            
            int neighbour = adj[node][i];
            
            if(parent == neighbour) continue;
            
            else if(visited[neighbour]) lowTime[node] = min(lowTime[node], discoveryTime[neighbour]);
            
            else{
                
                //got neighbour broo -- explore it
                counter++;
                child++; //for base case i'm taking this
                DFS(adj[node][i], node, discoveryTime, lowTime, visited, artPt, adj, counter);
                
                //after returning back
                if(discoveryTime[node] <= lowTime[neighbour] && parent!=-1){
                    //it is a articulation point ..yayyyyyy mil gaya
                    artPt[node]=1;
                }
                
               lowTime[node] = min(lowTime[node], lowTime[neighbour]);
                
            }
            
            if(child>1 && parent==-1){
                //base case for root node..kabhi kabhi ye bhi ho sakta hai articulation point
                artPt[node] = 1;
            }
        }
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        
        vector<int> discoveryTime(V);
        vector<int> lowTime(V);
        
        vector<int> visited(V,0);
        vector<int> artPt(V,0);
        int counter =0;
        vector<int> ans;
        
        DFS(0,-1, discoveryTime, lowTime, visited, artPt,adj, counter);
        
        for(int i=0;i<V;i++){
            if(artPt[i]) ans.push_back(i);
        }
        
        if(ans.size()==0) return {-1};
        
        return ans;
        
        
        
    }
};