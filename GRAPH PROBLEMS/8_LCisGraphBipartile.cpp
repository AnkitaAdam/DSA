class Solution {
public:

    bool checkBipartileByDFS(int node, vector<vector<int>> &graph, vector<int> &color){

        for(int i=0; i<graph[node].size(); i++){
            //will be 2 cases

            //color is not assigned
            if(color[graph[node][i]] == -1){
                //assign the color
                color[graph[node][i]] = (color[node] + 1) % 2;
                //then make a call to neighbour for coluring 
                if(!checkBipartileByDFS(graph[node][i], graph, color)) return 0;

            }
            //color is already assigned
            else{
                //check the color of node with neighbour..if matching coloring is not possible
                if(color[node] == color[graph[node][i]]){
                    return 0;
                }
            }

        }
        return 1;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        //we will follow 2-coloring graph

        // 1--> BFS APPROACH
        int v= graph.size();

        vector<int> color(v,-1);

        // queue<int> qu;
       

        // //if graph is disconnected for that we need to check for all vertices by visiting
        // for(int i=0; i<v; i++){

        //     if(color[i] == -1){
        //         qu.push(i);
        //         color[i]=1;

        //         while(! qu.empty()){

        //             int node = qu.front();
        //             qu.pop();

        //             for(int i=0; i<graph[node].size(); i++)
        //             {
        //                 if(color[graph[node][i]] == -1){
        //                     color[graph[node][i]] = (color[node]+1) %2;
        //                     qu.push(graph[node][i]);
        //                 }else{
        //                     if(color[node] == color[graph[node][i]]) return false;
        //                 }
        //             }

        //         }
        //     }
        // }


        // return true;

        // 2--> DFS APPROACH

        for(int i=0;i<v; i++){
            if(color[i] == -1){
                color[i]=0;
                if(!checkBipartileByDFS(i, graph, color)){
                    return false;
                }
            }
        }
        return true;
    }
};