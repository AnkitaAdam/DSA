class Solution {
public:
    void dfs(int node, int parent, vector<int> &discoveryTime, vector<int>&lowTime, vector<vector<int>>&adj, vector<vector<int>>&bridges, vector<bool>&visited, int &count){

        lowTime[node] = discoveryTime[node] = count;
        visited[node] = 1;

        for(int i=0;i<adj[node].size();i++){

            int neighbour = adj[node][i];
            if(neighbour == parent){
                continue;
            }
            else if(visited[neighbour]){
                lowTime[node] = min(lowTime[node], lowTime[neighbour]);

            }else{
                count++;

                dfs(neighbour, node, discoveryTime, lowTime, adj, bridges, visited, count);

                //now check whther bridge exists or not?

                if(lowTime[neighbour] > discoveryTime[node]){
                    vector<int> temp;
                    temp.push_back(node);
                    temp.push_back(neighbour);
                    bridges.push_back(temp);
                }

                lowTime[node] = min(lowTime[node], lowTime[neighbour]);
            }
        }
        
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        vector<vector<int>> adj(n);

        for(int i=0;i<connections.size();i++){
            int u = connections[i][0];
            int v = connections[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);

        }

        vector<vector<int>> bridges;
        vector<int> discoveryTime(n);
        vector<int> lowTime(n);
        vector<bool> visited(n,0);
        int counter=0;


        dfs(0,-1,discoveryTime, lowTime, adj, bridges,visited, counter);

        return bridges;

    }
};