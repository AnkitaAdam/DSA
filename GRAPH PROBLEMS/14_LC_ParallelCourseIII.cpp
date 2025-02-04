class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        
       

        vector<int> courseTime(n,0);
        vector<vector<int>> adj(n);
        vector<int> inDegree(n,0);

        for(int i=0;i<relations.size();i++){
            adj[relations[i][0]-1].push_back(relations[i][1]-1);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                inDegree[adj[i][j]]++;
            }
        }

        queue<int>qu;

        for(int i=0;i<n;i++){
            if(!inDegree[i]){
                qu.push(i);
            }
        }

        while(!qu.empty()){

            int node = qu.front();
            qu.pop();

            for(int i=0;i<adj[node].size(); i++){
                inDegree[adj[node][i]]--;
                if(!inDegree[adj[node][i]]){
                    qu.push(adj[node][i]);
                }

                courseTime[adj[node][i]] = max(courseTime[adj[node][i]], courseTime[node]+time[node]);

            }
        }


        int ans = 0;

        for(int i=0;i<n;i++){

            ans = max(ans, courseTime[i] + time[i]);

        }

        return ans;



    }
};